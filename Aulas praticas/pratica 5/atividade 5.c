#include<stdio.h>

/*
5.
 Fa�a um programa que leia um vetor de 15 posi��es para n�meros reais e, depois, um
c�digo inteiro.
Se o c�digo for 1, imprima o vetor na ordem direta; 
Se for 2, mostre o vetor na ordem inversa. 
Caso, o c�digo for diferente de 1 e 2 escreva uma mensagem falando que o c�digo �
inv�lido.
Entrada
Seu programa ter� como entrada um vetor de 15 posi��es do tipo float e um n�mero
inteiro e positivo referente � op��o. (1 ou 2). 
Sa�da 
A sa�da de seu programa dever� ser, caso 1, o vetor ser� apresentado em ordem direta,
do tipo float, com duas casas decimais depois da v�rgula. Caso 2, ser� apresentado em
ordem inversa do tipo float com duas casas decimais depois da v�rgula; tudo com
espa�amento entre os n�meros e sem pulo de linha.   
*/

int main(){
	
	int i,y;
	float x[15];
	
	printf("informe os numeros:");
	
	for(i=0;i<15;i++){
		scanf("%d", &x[i]);
	}
	
	switch(y){
		case 1:{
			for(i=0;i<15;i++){
			printf("%.1f",x[i]);
			}
			break;
		}
		case 2:{
			for(i=15;i<15;i--){
			printf("%.1f",x[i]);
			}
			break;
		}
		default:printf("codigo invalido.\n");
	}
	
	return 0;
}

