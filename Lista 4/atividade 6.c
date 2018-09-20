#include<stdio.h>

int main(){
	
	int x[10],maior,menor,i;

	
	printf("informe os numeros:\n");
	
	for(i=0;i<10;i++){
		scanf("%d",&x[i]);
		if(i==0){
			maior=x[0];
			menor=x[0];
		}
		if(maior<x[i]){
			maior=x[i];
		}
		if(menor>x[i]){
			menor=x[i];
		}
	}
	
	printf("maior:%d\nmenor:%d", maior,menor);
	
	return 0;
}
