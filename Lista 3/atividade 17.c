#include<stdio.h>

/*
Faca um programa que leia um numero inteiro positivo n e calcule a soma dos
n primeiros numeros naturais.
*/

int main(){
	
	int num,i,soma=0;
	
	do{
		scanf("%d", &num);
	}while(num%2!=0&&num<0);
	
	for(i=1;i<=num;i++){
		soma=soma+i;
	}
	printf("%d", soma);
	
	return 0;
}
