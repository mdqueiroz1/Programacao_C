#include<stdio.h>
/*
8.  Escreva um programa que leia 10 numeros e escreva o menor valor lido e o maior valor
lido.
*/
int main(){
	
	int maior,menor,num[10],i;
	
	printf("Digite os 10 numeros:\n");

	for(i=0;i<10;i++){
	
		scanf("%d", &num[i]);
		
		if(i==0){
			maior=num[0];
			menor=num[0];
		}
	
	}
	

	printf("maior:%d\nmenor:%d",maior,menor);
	
	return 0;
}
