#include<stdio.h>
/*
7.  Faca um programa que leia 10 inteiros positivos, ignorando nao positivos, e imprima sua
media.
*/
int main(){
	
	int media=0,num[10],i;
	
	printf("Digite os 10 numeros:\n");

	for(i=0;i<10;i++){
		do{
			scanf("%d", &num[i]);
		}while(num[i]<0)
		media=media+num[i];
	}
	
	media=media/10;
	printf("media:%d",media);
	
	return 0;
}
