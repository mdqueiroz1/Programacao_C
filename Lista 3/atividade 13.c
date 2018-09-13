#include<stdio.h>

/*
13.  Fac ¸ a um programa que leia um numero inteiro positivo par N
e imprima todos os numeros pares de 0 ate N em ordem crescente.
*/

int main(){
	
	int num,i=0;
	
	scanf("%d", &num);
	
	while(i<=num){
		if(i%2==0){
			printf("%d ",i);
		}
		i++;
	}

	return 0;
}
