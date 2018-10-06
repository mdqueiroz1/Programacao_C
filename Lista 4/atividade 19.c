#include<stdio.h>


int main(){
	
	int i, vetor[50];
	
	for(i=0;i<50;i++){
		vetor[i]=(i+5*i)%(i+1);
	}
	for(i=0;i<50;i++){
			printf("%d ",vetor[i]);
	}
	printf("\n");
	
	return 0;
}
