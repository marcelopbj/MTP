#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main() {
	Matriz A, B, C;
	int nlinA, ncolA, nlinB, ncolB;
	printf("Entre com o numero de linhas e o numero de colunas da matriz 1: ");
	scanf("%d", &nlinA); 
	scanf("%d", &ncolA);
	A = criarMatriz(nlinA, ncolA);
	preencherMatriz(A);
	printf("Entre com o numero de linhas e o numero de colunas matriz 2: ");
	scanf("%d", &nlinB); 
	scanf("%d", &ncolB);
	B = criarMatriz(nlinB, ncolB);
	preencherMatriz(B);
	if (ncolA==nlinB){
		C=multiplicaMat(A,B);
		imprimirMatriz(C);
	}
	else {
		printf("nao e possivel");
	}
		destruirMatriz(A);
		destruirMatriz(B);
		destruirMatriz(C);
	return EXIT_SUCCESS;
}