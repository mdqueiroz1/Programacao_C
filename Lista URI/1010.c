#include<stdio.h>

int main(){
	
	int i,y,z;
	float total=0, x;
	
	for(i=0;i<2;i++){
	scanf("%d %d", &y, &z);
	scanf("%f", &x);
	
	total=total+z*x;
	}
	
	printf("VALOR A PAGAR: R$ %.2f\n", total);
	
	return 0;
	
}
