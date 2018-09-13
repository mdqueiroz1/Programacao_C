#include<stdio.h>
/*
7 - Faça um programa imprima na tela um quadrado N X N  oco  formado
apenas por uma letra qualquer. O tamanho do quadrado é dado pelo usuário.
Dica: Faça o quadrado cheio primeiro para depois tentar o oco.
*/
int main(){
	
	int x,i,j;
	char y;
	
	scanf("%c %d", &y, &x);
	fflush(stdin);
	
	for(i=1;i<=x;i++){
		if(i==1||i==5){
		printf("%c",y);
		}
	
		for(j=1;j<x;j++){
			if(i==1||i==5){
			printf("%c",y);
			}
		}
	printf("\n");
	}
	return 0;
}
