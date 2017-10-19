#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void desenho(int l, int c) {
	char caracteres[] = ": $ # $ : 4 b . ' :. : $ # $: 4b. ':.";
	for(int i=0;i<=l;i++){
		for(int j=0;j<=c;j++){
			printf("%c", caracteres[rand()%strlen(caracteres)+1]);
		
		}
		printf("\n");
	}
	getchar();
}

int main() {
    srand(time(0));
    int linha=0, coluna=0;
	printf("Informe a quantidade de linhas e colunas da arte:\n\n");
	scanf("%d%d", &linha,&coluna);
	desenho(linha,coluna);

    getchar();
	return 0;
}