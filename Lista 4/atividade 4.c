#include<stdio.h>

int main(){
	
	int a[8],x,y,i,soma;
	
	printf("informe os valores do vetor");
	for(i=0;i<8;i++){
		scanf("%d", &a[i]);
	}
	
	printf("informe os valores de x e y");
	scanf("%d %d", &x,&y);
	
	soma=a[x]+a[y];
	
	printf("%d", soma);

	
	return 0;
}
