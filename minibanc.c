#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef
    struct Cliente {
        char nome[256];
        int idade;
        char rg[256];
        char cpf[256];
        char usuario[256];
        char senha[256];
        float saldo;
        float inseriu;
        float retirou;
        int inseriucont;
        int retiroucont;
        
    }Cliente;

void criarconta (){
	system("cls");
	Cliente cliente;
	FILE * arq;
	char usuario[256];
	printf("---CRIAR CONTA---\n");
	printf("\nNome:");
    scanf(" %[^\n]",&cliente.nome);
    printf("\nIdade: ");
    scanf(" %d",&cliente.idade);
    if(cliente.idade<18)
    {
    	printf("Conta negada!E necessario ter no minimo 18 anos para criar a conta.\n");
    	system("pause");
    	return;
	}
	printf("\nRG: ");
    scanf(" %[^\n]",&cliente.rg);
    printf("\nCPF: ");
    scanf(" %[^\n]",&cliente.cpf);
    printf("\nUsuario: ");
    scanf(" %[^\n]",&cliente.usuario);
    strcpy(usuario,cliente.usuario);
    strcat(usuario,".txt");
    arq = fopen(usuario,"r");
    if(arq == NULL){
    	printf("\nSenha: ");
    	scanf(" %[^\n]",&cliente.senha);
		cliente.saldo=0;
		cliente.inseriu=0;
		cliente.retirou=0;
		cliente.inseriucont=0;
		cliente.retiroucont=0;
		gravar(cliente);
	}
	else {
		printf("Nome de usuario ja cadastrado!\nTente outro.\n");
		system("pause");
		return;
		
	}
}
void gravar(Cliente cliente) {
    FILE * arq;
	char nomearquivo[256];
	strcpy(nomearquivo,cliente.usuario);
    strcat(nomearquivo,".txt");
    arq = fopen(nomearquivo,"w");
    fprintf(arq,"%s\n",cliente.nome);
    fprintf(arq,"%d\n",cliente.idade);
    fprintf(arq,"%s\n",cliente.rg);
    fprintf(arq,"%s\n",cliente.cpf);
    fprintf(arq,"%s\n",cliente.usuario);
    fprintf(arq,"%s\n",cliente.senha);
    fprintf(arq,"%f\n",cliente.saldo);
    fprintf(arq,"%f\n",cliente.inseriu);
    fprintf(arq,"%f\n",cliente.retirou);
    fprintf(arq,"%d\n",cliente.inseriucont);
    fprintf(arq,"%d\n",cliente.retiroucont);
    fclose(arq);
    system("pause");
}
void mostrarconta ()
{
	system("cls");
	Cliente cliente;
	printf("---MOSTRAR CONTA---");
	if (ler(&cliente)==1){
		return;
	}
	printf("Nome: %s\n",cliente.nome);
	printf("Idade: %d\n",cliente.idade);
	printf("RG: %s\n",cliente.rg);
	printf("CPF: %s\n",cliente.cpf);	
	system("pause");
}
int ler(Cliente *pcliente){
	FILE * arq;
	char usuario[256];
	printf("\nInforme o usuario: ");//verificar se o usuario existe
	scanf("%s",usuario);
	
	strcat(usuario,".txt");
    arq = fopen(usuario,"r");
    if(arq == NULL){
    	printf("Usuario nao cadastrado\n");
    	system("pause");
    	return 1;
	}
	fscanf(arq,"%[^\n]\n",&(pcliente->nome));
	fscanf(arq,"%d\n",&(pcliente->idade));
	fscanf(arq,"%[^\n]\n",&(pcliente->rg));
	fscanf(arq,"%[^\n]\n",&(pcliente->cpf));
	fscanf(arq,"%[^\n]\n",&(pcliente->usuario));
	fscanf(arq,"%[^\n]\n",&(pcliente->senha));
	fscanf(arq,"%f\n",&(pcliente->saldo));
	fscanf(arq,"%f\n",&(pcliente->inseriu));
	fscanf(arq,"%f\n",&(pcliente->retirou));
	fscanf(arq,"%d\n",&(pcliente->inseriucont));
	fscanf(arq,"%d\n",&(pcliente->retiroucont));
	fclose(arq);
	return 0;	
}

void inserir(){
	system("cls");
	Cliente cliente;
	float adicionar=0;
	printf("---INSERIR DINHEIRO---");
	if (ler(&cliente)==1){
		return;
	}
	printf("Informe a quantidade que deseja depositar: ");
	scanf("%f",&adicionar);
	cliente.saldo += adicionar;
	cliente.inseriu += adicionar; 
	cliente.inseriucont++;
	printf("Saldo: R$%0.2f\n",cliente.saldo);
	gravar(cliente);
}
void retirar(){
	system("cls");
	Cliente cliente;
	float retirar=0;
	printf("---RETIRAR DINHEIRO---");
	if (ler(&cliente)==1){
		return;
	}
	printf("Informe a quantidade que deseja retirar: ");
	scanf("%f", &retirar);
	if (retirar>cliente.saldo)
	{
		printf("Voce nao possui este saldo!\n");
		system("pause");
		return;
	}
	cliente.saldo -= retirar;
	cliente.retirou += retirar;
	cliente.retiroucont++;	
	printf("\nSaldo: R$%0.2f\n",cliente.saldo);
	gravar(cliente);
}

void mostrarsaldo()
{
	system("cls");
	Cliente cliente;
	printf("---SALDO---");
	if (ler(&cliente)==1){
		return;
	}
	printf("Saldo: R$%0.2f\n",cliente.saldo);
	system("pause");
	
}
void extrato(){
	system("cls");
	Cliente cliente;
	printf("---EXTRATO---");
	if (ler(&cliente)==1){
		return;
	}
	printf("Inseriu: R$%0.2f em %d vezes\n",cliente.inseriu, cliente.inseriucont);
	printf("Retirou: R$%0.2f em %d vezes\n",cliente.retirou, cliente.retiroucont);
	printf("Saldo atual: R$%0.2f\n",cliente.saldo);
	system("pause");
}
void removeconta(){
	system("cls");
	char usuario[256];
	printf("Informe o nome do usuario que deseja remover: ");//verificar se o usuario existe
	scanf("%s",usuario);
	strcat(usuario,".txt");
	remove(usuario);
	printf("Usuario removido!\n");
	system("pause");
}
int main ()
{
	Cliente cliente;
	FILE * arq;
	int op=0;
	do{
	system("cls");
	printf("1 - Criar Conta \n2 - Mostrar Conta \n3 - Mostrar Saldo \n4 - Inserir Dinheiro \n5 - Retirar Dinheiro \n6 - Extrato \n7 - Remover Conta \n8 - Sair\n\nDigite o numero da acao que deseja realizar: "); 
	scanf("%d", &op);
	switch (op){
	case 1:
		criarconta();
		break;
	case 2:
		mostrarconta();
		break;
	case 3:
		mostrarsaldo();
		break;
	case 4:
		inserir();
		break;
	case 5:
		retirar();
		break;
	case 6:
		extrato();
		break;
	case 7:
		removeconta();
		break;
	}
	}while(op!=8);
	getch();
	return 0;
}
