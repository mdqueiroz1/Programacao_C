#include<stdio.h>

int main(){
	
	int i,j, vet[10],aux[10],teste=0;
	
	for(i=0;i<10;i++){
		scanf("%d", &vet[i]);
		aux[i]=0;
	}

	for(i=0;i<10;i++){
		if(aux[i]==0){
			for(j=1;j<9;j++){
				if(vet[i]==vet[j]&&vet[i]!=teste){
					printf("%d",vet[i]);
					teste=vet[i];
					aux[j]=1;
				}
			}
		}
	}
	return 0;
}
