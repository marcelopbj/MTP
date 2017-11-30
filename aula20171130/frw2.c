#include <stdio.h>
#include <conio.h>
#include<iostream>
#include <time.h>
#include <math.h>

int main ()
{
	srand(time(0));
	char nome[50];
	int op=0, soma=0, maior, menor;
	float media, s;
	int n, vet[100];
	do{
	system("cls");
	printf("Digite 1 para NOVO ARQUIVO \nDigite 2 para ACRESCENTAR AO ARQUIVO \nDigite 3 para LER ARQUIVO \nDigite 4 para sair");
	scanf("%d", &op);
	FILE *arquivo;
	switch (op){
	case 1:
			system("cls");
			printf("Informe o nome do novo arquivo: ");
			scanf("%s", nome);
			printf("Informe quantos numeros aleatorios quer gerar: ");
			scanf("%d", &n);
			system("pause");
		
		break;
	case 2:
			system("cls");
			printf("Informe o nome do arquivo: ");
			scanf("%s", nome);
			printf("Informe quantos numeros aleatorios quer acrescentar: ");
			scanf("%d", &n);
			arquivo = fopen (nome, "w");
			for (int i=0; i<=n; i++)
			{
				vet[i]=rand()%100;
				fprintf(arquivo, "%d ",vet[i]);
			}
			fclose(arquivo);
			system("pause");
		break;
	case 3:
		printf("Informe o nome do arquivo: ");
		scanf("%s", nome);
		arquivo = fopen(nome, "r");
		for (int i=0; i<n; i++)
		{
			fscanf(arquivo, "%d ", &vet[i]);
	
		}
		maior=vet[0];
		menor=vet[0];
		for (int i=0; i<n; i++)
		{
			soma=soma+vet[i];
			if(vet[i]>maior)
				maior=vet[i];
			if(vet[i]<menor)
				menor=vet[i];
		}
		media=soma/n;
		for (int i=0; i<n; i++)
		{
			s=(vet[i]-media)*(vet[i]-media);
		}
		s=s/(n-1);
		s=sqrt(s);
		printf("Os numeros sao:");
		for (int i=0; i<n;i++)
		{
			printf("%d ", vet[i]);
		}
		printf("\nMedia:%f \nDesvio Padrao:%f \nMaior:%d \nMenor:%d\n", media, s, maior, menor);
		fclose(arquivo);
		system("pause");
		break;
	}
	}while(op!=4);
	getch();
	return 0;
}