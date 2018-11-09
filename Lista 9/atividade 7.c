#include<stdio.h>

int troca(int *x, int *y){
		
	*x=*y + *x;

	return;
}

int main(){

	int x, y,*px,*py;
	
	puts("Informe dois numeros:");
	scanf("%d %d", &x, &y);
	
	px=&x;
	py=&y;
	
	printf("%d %d\n",x,y);
	troca(px,py);
	printf("%d\n",*px);
	
	return 0;
}
