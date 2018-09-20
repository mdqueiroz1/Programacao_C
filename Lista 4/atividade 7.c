#include<stdio.h>

int main(){
	
	int x[10],maior,i;

	
	printf("informe os numeros:\n");
	
	for(i=0;i<10;i++){
		
		scanf("%d",&x[i]);
		
		if(i==0) maior=x[0];
		
		if(x[i]>maior){
			maior=i;
		}
	}
	
	printf("maior numero:%d\nposicao:%d", x[maior],maior);
	
	return 0;
}
