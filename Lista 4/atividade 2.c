#include<stdio.h>
/*
2.  Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos.
*/
int main(){
	
	int i, a[6];

	for(i=0;i<6;i++){
		scanf("%d", &a[i]);
	}
	
	for(i=0;i<6;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
