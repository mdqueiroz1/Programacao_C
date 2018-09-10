#include<stdio.h>

int main(){
	
	float a,x,y,z;
	
	printf("informe: base maior, base menor e altura;\n");
	do{
	scanf("%f %f %f", &x,&y,&z);
	}while(x<=0 || y<=0);
	a=((x+y)*z)/2;
	
	printf("A = %.2f\n",a);
	
	return 0;
	
}
