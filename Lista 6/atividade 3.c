#include<stdio.h>

typedef struct sAluno{
	char nome[20],curso[20];
	int matricula;
}aluno;

int main(){
	aluno alunos[5];
	
	for(int i=0; i<5;i++){
		printf("informe o nome do %d aluno:\n",i+1);
		gets(alunos[i].nome);
		printf("informe o curso do %d aluno:\n",i+1);
		gets(alunos[i].curso);
		printf("informe a matricula do %d aluno:\n",i+1);
		scanf("%d",&alunos[i].matricula);
	}
	
	for(i=0;i<5;i++){
		printf("%d aluno\n",i+1);
		printf("%d\t%s\t%s\n",alunos[i].matricula,alunos[i].nome,alunos[i].curso);
	}
	
	return 0;
}
