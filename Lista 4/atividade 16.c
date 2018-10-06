#include<stdio.h>


int main(){
	
	float vetor[5];

	int faca,i;

	switch(faca){
		
		case 0: break;

		case 1:{
			for (int i = 0; i < 5; i++){
				printf("%.2f",vetor[i]);	
			}
			break;
		}
		case 2:{
			for (int i = 5; i > 0; i--){
				printf("%.2f",vetor[i]);
			}
			break;
		}
		default: printf("Numero invalido.\n");
	}

	return 0;
}