#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado() {
	return rand()%6 + 1;
}

int main() {
    srand(time(0));
    int cont=0, soma;
	while(cont<3){
		soma=0;
		for (int i=0; i<=5;i++)
			soma+=dado();
		if(soma>=18 && soma<=23){
			printf("Sua soma e: %d\nVoce GANHOU!!\n", soma);
			cont=3;
		}
		else{
			printf("Sua soma e: %d\nVoce perdeu!!\n", soma);
			cont++;
		}

	
    getchar();
	}
	return 0;
}