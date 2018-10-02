#include<stdio.h>
#include<string.h>

int main(){
	
	int i;
	char vetor[20];
	puts("informe o nome:\n");
	
	gets(vetor);
	i=strlen(vetor);
	printf("o tamanho da string eh %d", i);
	
	return 0;
}
