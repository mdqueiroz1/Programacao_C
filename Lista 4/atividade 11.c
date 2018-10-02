#include<stdio.h>


int main(){
	
	float vetor[10],soma=0;
	int i,cont=0;
	
	for(i=0;i<10;i++){
		scanf("%f", & vetor[i]);
		if(vetor[i]%2==0){
			soma=soma+vetor[i];
		}else{
			cont++;
		}
	}
	printf("Numeros negativos: %d\nSoma: %.2f",cont,soma);
	
	return 0;
}
