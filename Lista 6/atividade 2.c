#include<stdio.h>

typedef struct sCadastro{
	char nome[20],endereco[20];
	int idade;
}cadastro;

int main(){
	
	cadastro cadastro1;
	
	puts("Informe o nome:\n");
	gets(cadastro1.nome);

	puts("Informe a idade:\n");
	gets(cadastro1.idade);

	puts("Informe o endereço:\n");
	gets(cadastro1.endereco);
	
	
	return 0;
}
