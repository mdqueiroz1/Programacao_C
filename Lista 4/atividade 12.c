#include<stdio.h>


int main(){
	
	int vetor[5],media=0,i,maior,menor;
	
	for(i=0;i<5;i++){
		scanf("%f", & vetor[i]);
		if(i==0){
			maior=vetor[0];
			menor=vetor[0];
		}
		if(vetor[i]>maior){
			maior=vetor[i];
		}
		if(vetor[i]<menor){
			menor=vetor[i];	
		}
		media=media+vetor[i];
	}
	vetor=vetor/5;
	
	printf("Maior: %d\nMenor: %d\nMedia: %d",maior,menor,media);
	
	return 0;
}
