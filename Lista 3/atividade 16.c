#include<stdio.h>

/*
Fac ¸ a  um  programa  que  leia  um  numero  inteiro  positivo impar N e  imprima  todos  os
numeros impares de 1 ate N em ordem decrescente.
*/

int main(){
	
	int num,i;
	
	do{
		scanf("%d", &num);
	}while(num%2==0&&num<1);
	
	do{
		if(num%2!=0){
			printf("%d ",num);
		}
		num--;
	}while(num>=1);

	return 0;
}
