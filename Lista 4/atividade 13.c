#include<stdio.h>


int main(){
	
	int vetor[5],media=0,i,maior,menor;
	
	for(i=0;i<5;i++){
		scanf("%f", & vetor[i]);
		if(i==0){
			maior=vetor[0];
			menor=vetor[0];
		}
		if(vetor[i]>vetor[maior]){
			maior=i;
		}
		if(vetor[i]<vetor[menor]){
			menor=i;	
		}
	}

	printf("Posicao do maior: %d\nPosicao do menor: %d\n",maior,menor);
	
	return 0;
}
