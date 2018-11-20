#include<stdio.h>

typedef struct sVetor{
	float x;
	float y;
	float z;
}vetor;

int main(){
	
	vetor a[3];
	
	a[3].x=a[1].x+a[2].x;
	a[3].y=a[1].y+a[2].x;
	a[3].z=a[1].z+a[2].x;
	
	printf("x = %.2f\ny = %.2f\nz = %.2f\n",a[3].x,a[3].y,a[3].z);
	
	return 0;
}
