#include<stdio.h>
/*
Leia  o  salario  de  um  trabalhador  e  o  valor  da  prestacao  de  um  emprestimo.   Se  a
prestacao  for  maior  que  20%  do  salario  imprima: Emprestimo nao concedido, caso contrario imprima:
Emprestimo concedido.
*/

int main(){
	
	float x,y;
	printf("digite o salário e o valor do emprestimo:\n");
	scanf("%f %f",&x,&y);
	
	if((x*0.2)>y){
		printf("emprestimo concedido");
	}else {
		printf("emprestimo nao concedido\n");
	}
	
	return 0;
}
