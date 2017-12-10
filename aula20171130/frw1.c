#include <stdio.h>
#include <conio.h>

void cadastrar (){
	system("cls");
	FILE *arquivo;
	char nome[50];
	int idade;
	float altura;
	printf("Informe seu nome: ");
	scanf("%s", nome);
	printf("Informe sua idade e altura: ");
	scanf("%d %f", &idade,&altura);
	arquivo = fopen ("info.txt", "w");
	fprintf(arquivo, "%s\n%d\t%f\n", nome, idade, altura);
	fclose(arquivo);
	system("pause");
}
void abrir (){
	system("cls");
	FILE *arquivo;
	char nome[50];
	int idade;
	float altura;
	arquivo = fopen("info.txt", "r");
	fscanf(arquivo, "%s\n%d\t%f\n", nome, &idade, &altura);
	fclose(arquivo);
	fprintf(stdout, "%s\n%d anos\n%g metros\n", nome, idade, altura);
	system("pause");

}
int main ()
{
	char nome[50];
	int op=0;
	do{
		system("cls");
	printf("Digite 1 para informar seus dados \nDigite 2 para visualizar os dados \nDigite 3  para sair");
	scanf("%d", &op);
	switch (op){
	case 1:
		cadastrar();
		break;
	case 2:
		abrir();
		break;
	}
	}while(op!=3);
	getch();
	return 0;
}
