#include<stdio.h>
#include<string.h>

int main(){
	
	int i;
	char vetor[20];
	puts("informe o nome:\n");
	
	gets(vetor);

	printf("os 4 caracteres sao ");
	for(i=0;i<4;i++){
		printf("%c", vetor[i]);
	}
	
	return 0;
}
