#include<stdio.h>
/*
Escreva um programa que leia um numero inteiro maior do que zero e devolva, na tela, a
soma de todos os seus algarismos. Por exemplo, ao numero 251 correspondera o valor
8 (2 + 5 + 1).  Se o numero lido nao for maior do que zero, o programa terminar
a com a mensagem “Numero invalido”
*/

int main(){
	
	int x,i,a=0,b=0,c=0,d=0,e=0,f=0;
	printf("forneça o numero (0 até 999999)\n");
	scanf("%d",&x);

	a=x%10;

	b=x%100;
	b=(b-a)/10;

	c=x%1000;
	c=(c-b)/100;

	d=x%10000;
	d=(d-c)/1000;
	
	e=x%100000;
	e=(e-d)/10000;
	
	f=x%1000000;
	f=(f-e)/100000;
	
	if(x<0&&x>999999){
		printf("Numero invalido");		
	}else{
		printf("soma: %d\n",a+b+c+d+e+f);
	}
	
	return 0;
}
