#include<stdio.h>
/*
Faca um programa que receba dois numeros e mostre o maior. 
Se por acaso, os dois numeros forem iguais, imprima a mensagem "Numeros iguais."
*/

int main(){
	
	int x,y;
	printf("forneça os numeros\n");
	scanf("%d %d",&x,&y);
	
	if(x==y){
		printf("Numeros iguais");
	}else {
		if(x>y){
			printf("%d > %d\n", x, y);		
		}else{
			printf("%d > %d\n", y, x);
		}
	}
	
	return 0;
}
