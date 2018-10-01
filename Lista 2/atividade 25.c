#include<stdio.h>
#include<math.h>

int main(){
	
	float delta,a,b,c,x1,x2;
		
		if(a!=0){
			printf("Nao eh equacao de segundo grau\n");
		}else{
			delta=b*b(-4*a*c);
			if(delta<0){
				printf("Nao existe raiz");
			}else if(delta==0){
					delta=sqrt(delta);
					x1=(-b+delta)/(2*a);
					
					printf("Raiz unica\n%.2f",x1);
				}
		}
		
	return 0;
}
