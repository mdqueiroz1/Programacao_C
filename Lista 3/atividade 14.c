#include<stdio.h>

/*
14.  Fac ¸ a um programa que leia um numero inteiro positivo par N
e imprima todos os numeros pares de 0 ate N em ordem decrescente.
*/

int main(){
	
	int num;
	
	scanf("%d", &num);
	
	while(0<=num){
		if(num%2==0){
			printf("%d ",num);
		}
		num--;
	}

	return 0;
}
