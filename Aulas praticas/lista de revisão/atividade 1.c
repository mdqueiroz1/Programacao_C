#include<stdio.h>
/*
1-Escrever um programa que leia o salário de um empregado e imprima a
taxa de contribuição do INSS segundo a tabela abaixo.
*/
int main(){
	
	float salario;
	printf("informe o salario:");
	scanf("%f", &salario);
	
	if(salario<600){
		printf("Isento.\n");
	}else if(salario<=1200){
		printf("20%.\n");
	}else if(salario<=2000){
		printf("25%.\n")
	}else printf("30%")
	
	return 0;
}
