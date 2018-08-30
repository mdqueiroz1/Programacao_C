#include<stdio.h>
/*
Faca um programa que receba um numero inteiro e verifique se este numero e par ou impar.
*/

int main(){
	
	int x;
	printf("forneça o numero\n");
	scanf("%d",&x);
	
	if(x%2==0){
		printf("%d e par",x);		
	}else{
		printf("%d e impar",x);
	}
	
	return 0;
}
