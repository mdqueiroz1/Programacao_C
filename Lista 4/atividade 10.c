#include<stdio.h>

int main(){
	
	int x[15],i,media=0;

	
	printf("informe os numeros:\n");
	
	for(i=0;i<15;i++){
		scanf("%d",&x[i]);
		media=media+x[i];
	}
	
	media=media/15;
	
	 printf("media= %d\n",media);
	
	return 0;
}
