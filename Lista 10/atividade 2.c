#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int tam,i, *p;
	puts("Tamanho do vetor:");
	scanf("%d", &tam);
	
	p= (int*) malloc(tam*sizeof(int));
	
	for(i=0;i<tam;i++){
	scanf("%d", &p[i]);
	}
	for(i=0;i<tam;i++){
		printf("%d ",p[i]);
	}
	free (p);
	return 0;
}
