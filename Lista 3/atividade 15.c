#include<stdio.h>

/*
Fac ¸ a  um  programa  que  leia  um  numero  inteiro  positivo impar N e  imprima  todos  os
numeros impares de 1 ate N em ordem crescente.
*/

int main(){
	
	int num,i;
	
	do{
		scanf("%d", &num);
	}while(num%2==0&&num<1);
	
	for(i=1;i<=num;i++){
		if(i%2!=0){
			printf("%d ",i);
		}
	}

	return 0;
}
