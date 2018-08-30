#include<stdio.h>
/*
Escreva um programa que, dados dois numeros inteiros, mostre na tela o maior deles,
assim como a diferenca existente entre ambos.
*/

int main(){
	
	int x,y;
	printf("forneça os numeros\n");
	scanf("%d %d",&x,&y);
	
	if(x>y){
		printf("%d > %d\ndiferenca:%d\n ", x, y, x-y);		
	}else{
		printf("%d > %d\ndiferenca:%d\n ", y, x, y-x);
	}
	
	return 0;
}
