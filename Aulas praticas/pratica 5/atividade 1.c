#include<stdio.h>
/*
1.
 Leia um vetor inteiro de 10 posi��es. Escreva seus valores na sa�da.
Entrada
Seu programa deve ter como entrada um vetor de 10 posi��es de n�meros inteiros
positivos. 
Sa�da
Seu programa deve ter como sa�da os valores presentes nas posi��es do vetor. 
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
