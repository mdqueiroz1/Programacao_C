#include<stdio.h>

int main(){
	
	float x,y,z;
	
	scanf("%f %f %f", &x,&y,&z);
	
	if(x<y+z&&y<x+z&&z<y+x){
		printf("O comprimento de cada lado de um triangulo e menor do que a soma dos outros dois lados");
	}
	if(x==y&&y==z){
		printf("Triangulo equilatero.");
	}else	if(x==y||y==z){
		printf("Triangulo isosceles");
	}else if(x!=y&&y!=z){
		printf("Triangulo escaleno");
	}
	
	return 0;
}
