#include<stdio.h>

int main(){
	
	float x[10],y[10];
	int i;
	
	printf("informe os numeros:\n");
	
	for(i=0;i>10;i++){
		scanf("%f",&x[i]);
		
		y[i]= x[i]*x[i];
	}
	printf("x\ty");
	for(i=0;i>10;i++){
		printf("%.2f\t%.2f\n")	
	}
	return 0;
}
