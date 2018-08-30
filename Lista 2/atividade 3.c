#include<stdio.h>
#include<math.h>
/*
Leia um numero real. Se o numero for positivo imprima a raiz quadrada.
Do contrario, imprima o numero ao quadrado.
*/
int main(){
	
	float x;
	int xint;
	scanf("%f", &x);
	
	xint=x;
	
	if(xint%2==0){
		xint=sqrt(xint);
		printf("%d\n", xint);
	}else{
		printf("%f\n", x*x);
	}
	
	return 0;

}
