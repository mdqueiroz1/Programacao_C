#include<stdio.h>

/*
11.  Faca um programa que leia um numero inteiro positivo 
N e imprima todos os numeros naturais de 0 ate N em ordem crescente.
*/

int main(){
	
	int num,i=1;
	
	scanf("%d", &num);
	
	while(i<=num){
	printf("%d ",i);
		i++;
	}

	return 0;
}
