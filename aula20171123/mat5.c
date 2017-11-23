#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main() {
	Matriz A, B, Ai, C;
	int nlinA, ncolA, nlinB, ncolB;
	printf("Entre com a ordem da matriz A: ");
	scanf("%d", &nlinA); 
	A = criarMatriz(nlinA, nlinA);
	preencherMatriz(A);
	printf("Preecha o vetor B: ");
	B = criarMatriz(nlinA, 1);
	preencherMatriz(B);
	if (ncolA==nlinB){
		Ai=inversa(A);
		C=multiplicaMat(Ai,B);
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