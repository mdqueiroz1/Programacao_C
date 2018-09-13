#include<stdio.h>
/*
10.  Fac ¸ a um programa que calcule e mostre a soma dos 50 primeiros 
numeros pares.
*/
int main(){
	
	int num=0,i=1;
	
	while(i<=50){
		if(i%2==0){
		num=num+i;
		}
		i++;
	}

	printf("%d ",num);
	
	return 0;
}
