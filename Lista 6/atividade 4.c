#include<stdio.h>
#include<stdlib.h>

typedef struct sAluno{
	char nome[30];
	int matricula;
	float p1,p2,p3;
}aluno;

int main(){
	
	int i,media[5],maior=0,menormed=0,maiormed=0,maiormat;
	
	aluno a[5];
	
	for(i=0;i<5;i++){
		puts("infome o nome:");
		gets(a[i].nome);
		
		puts("infome a matricula:");
		scanf("%d", &a[i].matricula);
		
		puts("informe a nota da P1:");
		scanf("%f",&a[i].p1);
		
		puts("informe a nota da P2:");
		scanf("%f",&a[i].p2);
		
		puts("informe a nota da P3:");
		scanf("%f",&a[i].p3);
		
		media[i]=(a[i].p1+a[i].p2+a[i].p3)/3;
		
		if(a[i].p1>maior){
			maior=a[i].p1;
			maiormat=i;
		}
		if(menormed>media[i]){
			menormed=media[i];
		}
		if(maiormed<media[i]){
			maiormed=media[i];
		}
	}
	system("cls");
	printf("Maior media:%s\t%d",a[i].nome,)
	for(i=0;i<5;i++){
		printf("%s\t%d\n%d",a[i].nome,a[i].matricula,media[i]);
		if(media[i]>6){
			puts("Aprovado!\n");
		}else puts("Reprovado!");
	}
	
	
	return 0;
}
