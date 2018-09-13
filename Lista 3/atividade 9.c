#include<stdio.h>
/*
9.  Faca  um  programa  que  leia  um  numero  inteiro N e  depois  imprima  os
N primeiros numeros naturais impares.
*/
int main(){
	
	int num,i=1;
	
	printf("Digite o numero:\n");

	scanf("%d", &num);
	
	while(i<num){
		if(i%2!=0){
		printf("%d", i);
		}
		i++;
	}

	printf("%d ",i);
	
	return 0;
}
