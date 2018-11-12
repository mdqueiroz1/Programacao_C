#include<stdio.h>

int troca(int *x, int *y){
	
	int aux;
	
	*y=*y * 2;
	*x=*x * 2;

	return (*x * *y);
}

int main(){

	int x, y,*px,*py;
	
	puts("Informe dois numeros:");
	scanf("%d %d", &x, &y);
	
	px=&x;
	py=&y;
	
	printf("%d %d\n",x,y);
	
	printf("%d\n",troca(px,py));
	
	return 0;
}
