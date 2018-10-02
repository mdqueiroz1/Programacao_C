#include<stdio.h>
#include<string.h>

int main(){
	
	int idade;
	char sexo[15],vetor[20];
	puts("informe o sexo:(feminino/masculino)\n");
	
	gets(sexo);
	scanf("%d", &idade);
	if(strcmp(sexo, "feminino")&&idade<=25){
		printf("Aceita\n");
	}else printf("Nao aceita\n");
	
	return 0;
}
