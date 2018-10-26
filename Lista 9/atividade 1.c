#include<stdio.h>


int main(){
	
	int x=1, *px;
	px=&x;
	float y=1.1, *py;
	py=&y;
	char z='a', *pz;
	pz=&z;
	
	printf("%d, %.2f, %c",*px,*py,*pz);
	
	puts("informe um inteiro: ");
	scanf("%d",px);
	
	puts("informe um float: ");
	scanf("%f",py);
	
	puts("informe um char: ");
	scanf("%c",pz);
	
	printf("%d %.1f %c", *px,*py,*pz);
	
	return 0;
}
