#include<stdio.h>
#include<math.h>

int main(){
	
	int x,y,z,a,b,c;
	
	scanf("%d", &x);
	
	a= x/100;
	b= a*100;
	c= x-b;
	y= a+c;
	z= pow(y,2);
	
	if(x==z) printf("Sim");
	else printf("Nao");
	
}
