#include<stdio.h>
/*
1.  Fac ¸a um programa que determine o mostre os cinco primeiros multiplos de 3, conside-
rando numeros maiores que 0.
*/
int main(){
	
	int i,cont=1;
	
	printf("informe a quantidade de multiplos a ser mostrados:\n");
	scanf("%d", &i);
	
	do{
	
		if(cont%3==0){
			printf("%d ",cont);
			i--;
		}
	cont++;
	}while(i>0);
	
	return 0;
}
