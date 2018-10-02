#include<stdio.h>
#include<string.h>

int main(){
	
	int i=0 ,cont=0;
	char vetor[20];
	puts("informe a string.\n");
	gets(vetor);
	
	while(vetor[i]!='\0'){
		cont++;
		i++;
	}
	
	printf("o tamanho da string eh %d", cont);
	
	return 0;
}
