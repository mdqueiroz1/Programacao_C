#include<stdio.h>

int main(){
	
	int i, j,vetor[10];

	
	for(i=0;i<10;i++){
		scanf("%d",&vetor[i]);
	}
	

	for(i=0;i<10;i++){
		for(j=1;j<10;j++){
			if(i!=j){
				if(vetor[i]==vetor[j]){
					vetor[j]=0;
				}
			}
		}
	}
	

	for(i=0;i<10;i++){
		for(j=0;j<9;j++){
			if(vetor[j]==0){
				vetor[j]=vetor[j+1];
				vetor[j+1]=0;
			}
		}
	}
	

	for(i=0;i<10;i++){
		if(vetor[i]!=0){
		printf("%d",vetor[i]);
		}
	}

	return 0;
}
