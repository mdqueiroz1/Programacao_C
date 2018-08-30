#include<stdio.h>
#include<stdlib.h>
/*
Faca um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu
peso ideal, utilizando as seguintes formulas (onde h corresponde a altura):
Homens:(72.7*h)-58
Mulheres:(62,1*h)-44,7
*/

int main(){
	
	float x;
	char y;
	
	printf("digite a altura:\n");
	scanf("%f",&x);
	printf("digite o sexo(h para homem e m para mulher):\n");
	fflush(stdin);
	scanf("%c", &y);
	
	
	if(y=='h'){
		printf("peso ideal: %.2f\n",(72.7*x)-58);
	}else {
		printf("peso ideal: %.2f\n",(62.1*x)-44.7);
	}
	
	return 0;
}
