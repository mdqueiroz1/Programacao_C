#include<stdio.h>

void troca(int *x, int *y){
	
	int aux;
	
	if(*x<*y){
	aux=*y;
	*y=*x;
	*x=aux;
	}
	return ;
}

int main(){

	int x, y,*px,*py;
	
	puts("Informe dois numeros:");
	scanf("%d %d", &x, &y);
	
	px=&x;
	py=&y;
	
	printf("%d %d\n",x,y);
	troca(px,py);
	printf("%d %d\n",x,y);
	
	return 0;
}
