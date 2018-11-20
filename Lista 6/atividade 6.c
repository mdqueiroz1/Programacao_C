#include<stdio.h>

typedef struct sAluno{
	char nome[30];
	int matricula,cod_disciplina;
	float p1,p2,media;
}aluno;

int main(){
	
	int i;
	aluno a[10];
	
	for(i=0;i<10;i++){
		puts("Informe o nome:");
		gets(a[i].nome);
		puts("Informe a matricula:");
		scanf("%d",a[i].matricula);
		puts("Informe o codigo da disciplina:");
		scanf("%d",a[i].cod_disciplina);
		puts("Informe a 1a nota:");
		scanf("%f",a[i].p1);
		puts("Informe a 2a nota:");
		scanf("%f",a[i].p2);
		
		a[i].media=(a[i].p1+a[i].p2*2.0)/3.0;
	}
	
	for(i=0;i<10;i++){
		printf("%s\t%d\n%d\t%.2f\n\n",a[i].nome,a[i].matricula,a[i].cod_disciplina,a[i].media);
	}
	
	return 0;
}
