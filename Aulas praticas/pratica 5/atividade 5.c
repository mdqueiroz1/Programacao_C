#include<stdio.h>

/*
5.
 Faça um programa que leia um vetor de 15 posições para números reais e, depois, um
código inteiro.
Se o código for 1, imprima o vetor na ordem direta; 
Se for 2, mostre o vetor na ordem inversa. 
Caso, o código for diferente de 1 e 2 escreva uma mensagem falando que o código é
inválido.
Entrada
Seu programa terá como entrada um vetor de 15 posições do tipo float e um número
inteiro e positivo referente à opção. (1 ou 2). 
Saída 
A saída de seu programa deverá ser, caso 1, o vetor será apresentado em ordem direta,
do tipo float, com duas casas decimais depois da vírgula. Caso 2, será apresentado em
ordem inversa do tipo float com duas casas decimais depois da vírgula; tudo com
espaçamento entre os números e sem pulo de linha.   
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

