#include<stdio.h>
/*
5 - Codifique, compile e execute um programa em C que calcule o fatorial de
um número inteiro qualquer. (ex. 3! = 1 x 2 x 3)
*/
int main(){
	int i,fatorial=1;
	
	printf("informe o numero a ser calculado:\n");
	scanf("%d",&i);
	
	while(i>0){
		fatorial=fatorial*i;
		i--;
	}
	printf("%d",fatorial);
return 0;
}
