#include <stdio.h>
#include <stdlib.h>
#include<iostream>

char *recebestr(FILE* fp, size_t size){
    char *str;
    int ch;
    size_t len = 0;
    str = (char*)realloc(NULL, sizeof(char)*size);
    if(!str)return str;
    while(EOF!=(ch=fgetc(fp)) && ch != 'm'){
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
    char *m;
    printf("Informe sua string: ");
    m = recebestr(stdin, 10);
    printf("%s\n", m);

    free(m);
	system("pause");
    return 0;
}