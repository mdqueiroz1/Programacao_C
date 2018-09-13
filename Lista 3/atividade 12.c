#include<stdio.h>

/*
12.  Faça um programa que leia um numero inteiro positivo N
e imprima todos os numeros naturais de 0 ate N em ordem decrescente.
*/

int main(){
	
	int num,i=1;
	
	scanf("%d", &num);
	
	while(0<=num){
	printf("%d ",num);
		num--;
	}

	return 0;
}
