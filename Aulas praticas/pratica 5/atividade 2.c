#include<stdio.h>

/*
2. 
Leia um vetor inteiro de 10 posi��es. Conte e escreva quantos valores pares ele
possui.
Entrada
Seu programa deve ter como entrada um vetor de 10 posi��es de n�meros inteiros
positivos. 
Sa�da
Seu programa deve ter como sa�da a quantidade de valores pares que a entrada possui.  
*/

int main(){
	
	int cont=0 ,i , x[10];
	
	printf("informe os numeros:");
	
	for(i=0;i<10;i++){
		
		scanf("%d", &x[i]);
		
		if(x[i]%2==0){
		cont++;
		}
	}
	printf("%d", cont);
	
	return 0;
}

