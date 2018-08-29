#include<stdio.h>
#include<math.h>
//atividade 35
int main(){
	float x,y,z;
	
	scanf("%f %f",&x, &y);
	x=x*x;
	y=y*y;
	z=x+y;
	printf("%.3f", sqrt(z));
	
	return 0;
}
