#include<stdio.h>
/*
1.  Faca um programa que possua um vetor denominado A que armazene 6 numeros inteiros.
O programa deve executar os seguintes passos:
(a)  Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
(b)  Armazene em uma variavel inteira (simples) a soma entre os valores das posicoes A[0], 
A[1] e A[5] do vetor e mostre na tela esta soma.
(c)  Modifique o vetor na posicao 4, atribuindo a esta posicao o valor 100.
(d)  Mostre na tela cada valor do vetor A, um em cada linha.
*/
int main(){
	
	int i, a[6]={1, 0, 5, -2, -5, 7};
	
	i=a[0]+a[1]+a[5];
	printf("soma: %d", i);
	
	a[3]=100;
	for(i=0;i<6;i++){
		printf("\n%d",a[i]);
	}
	return 0;
}
