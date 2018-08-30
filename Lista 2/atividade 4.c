#include<stdio.h>
#include<math.h>
/*
Fac ¸a um programa que leia um numero e, caso ele seja positivo, calcule e mostre:
O numero digitado ao quadrado
A raiz quadrada do numero digitado
*/
int main(){
	
	int x,raiz_qua;
	scanf("%d", &x);
	
	
	if(x%2==0){
		raiz_qua=sqrt(x);
		printf("Quadrado: %d\n", x*x);
		printf("Raiz quadrada: %d\n", raiz_qua);
	}else{
		printf("numero invalido\n");
	}
	
	return 0;

}
