#include<stdio.h>
#include<stdlib.h>

struct typedef sAluno{
	char nome[20];
	int matricula;
}aluno;

int print_na_tela(aluno *p,int inicio, int fim){	
	
	if(inicio<=fim){
		printf("%d\t%s\n", p[inicio].matricula,p[inicio].nome);
		print_na_tela(p,inicio+1, fim);
	}else	return 0;
}

int main(){
	
	aluno a[50];
	
	print_na_tela(a,0,50);
	
	return 0;
}
