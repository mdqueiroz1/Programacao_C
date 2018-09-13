#include<stdio.h>

int main(){
	
	int cont, x,y;
	cont=1;
	y=0;
	scanf("%d", &x);
	
	while(cont>=x){
		
		y=cont+y;
		printf("%d",y);
	cont++;
	}
return 0;
}

