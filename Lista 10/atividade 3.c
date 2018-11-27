#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int tam,i, *p,par=0,impar=0;
	
	puts("Tamanho do vetor:");
	scanf("%d", &tam);
	
	p= (int*) malloc(tam*sizeof(int));
	
	for(i=0;i<tam;i++){
		scanf("%d", &p[i]);
		if(p[i]%2==0){
			par++;
		}else impar++;
	}
	printf("par:%d\nimpar:%d");
	free (p);
	return 0;
}
