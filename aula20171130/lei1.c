#include <stdio.h>
#include <stdlib.h>
char *recebestr(FILE* fp, size_t size){
    char *str;
    int ch;
    size_t len = 0;
    str = (char*)realloc(NULL, sizeof(char)*size);
    if(!str)return str;
    while(EOF!=(ch=fgetc(fp)) && ch != '.'){
        str[len++]=ch;
        if(len==size){
            str = (char*)realloc(str, sizeof(char)*(size+=16));
            if(!str)return str;
        }
    }
    str[len++]='\0';

    return (char*)realloc(str, sizeof(char)*len);
}
        
int main(void){
	char str[100];
	FILE *arquivo;
	arquivo = fopen("meutexto.txt", "r");
	fscanf(arquivo, "%s",str);
	fclose(arquivo);
	printf("%s",str);
	recebestr(stdin, 10);
	getchar();
    return 0;
}