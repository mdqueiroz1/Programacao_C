#include<stdio.h>
// Faca um programa que receba dois numeros e mostre qual deles e o maior.

int main(){
	
	int x,y;
	scanf("%d %d", &x,&y);
	
	if(x>y){
		printf("%d eh maior.\n", x);
	}else{
		printf("%d eh maior.\n", y);
	}
	
	return 0;

}
