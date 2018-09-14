#include<stdio.h>
/*
1.
 Leia um vetor inteiro de 10 posições. Escreva seus valores na saída.
Entrada
Seu programa deve ter como entrada um vetor de 10 posições de números inteiros
positivos. 
Saída
Seu programa deve ter como saída os valores presentes nas posições do vetor. 
*/

int main(){
	
	int i, x[10];
	
	printf("informe os numeros:");
	
	for(i=0;i<10;i++){
		scanf("%d", &x[i]);
	}
	for(i=0;i<10;i++){
		printf("%d ",x[i]);
	}
	
	return 0;
}
