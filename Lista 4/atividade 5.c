#include<stdio.h>

int main(){
	
	int x[10],cont,i;

	
	printf("informe os numeros:\n");
	
	for(i=0;i<10;i++){
		scanf("%d",&x[i]);
		if(x[i]%2==0){
			cont++;
		}
	}
	
	printf("%d", cont);
	
	return 0;
}
