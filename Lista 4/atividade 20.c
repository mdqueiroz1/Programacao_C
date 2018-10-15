#include<stdio.h>

int main(){
	
	int i,j,vetor[10],impar[10];
	
	for(i=0;i<10;i++){
		do{
		scanf("%d", &vetor[i]);
		}while(vetor[i]<0||vetor[i]>50);
		if(vetor[i]%2!=0){
			impar[j]=vetor[i];
			j++;
		}
	}
	for(i=0;i<10;i++){
			printf("%d ",vetor[i]);
	}
	printf("\n");
	
	return 0;
}
