#include<stdio.h>

int main(){
	
	int x[6],i;

	
	printf("informe os numeros:\n");
	
	for(i=0;i<6;i++){
		scanf("%d",&x[i]);
	}
	for(i=5;i>=0;i--){
	printf("%d ", x[i]);
	
	}
	return 0;
}
