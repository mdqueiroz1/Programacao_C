#include<stdio.h>
#include<string.h>

int main(){
	
	int i;
	char vetor[20];
	puts("informe o nome:\n");
	do{
	gets(vetor);
	}while(vetor[0]!='a'||vetor[0]!='A');
	
	printf("a string eh %s", vetor);
	
	return 0;
}
