#include<stdio.h>

int main(){
	
	int x[6],i;

	
	printf("informe os numeros:\n");
	
	for(i=0;i<6;i++){
		do{
		scanf("%d",&x[i]);
		}while(x[i]%2!=0);
	}
	for(i=5;i>=0;i--){
	printf("%d ", x[i]);
	
	}
	return 0;
}
