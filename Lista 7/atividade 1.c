#include<stdio.h>

int dobro(int x){
	x=x*2;
	
	return x;
}

int main(){
	
	int x;
	
	scanf("%d", &x);
	
	printf("o dobro de %d eh %d", x, dobro(x));
	
	return 0;
}
