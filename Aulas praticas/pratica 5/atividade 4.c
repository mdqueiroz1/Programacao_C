#include<stdio.h>

/*
4. 
Faça um vetor de tamanho 50 preenchido com o seguinte valor: (i+5*i) % (i+1), isto é,
cada elemento da posição i irá receber o valor resultado da expressão. Em seguida
imprima o vetor na tela.  
*/

int main(){
	
	int i, x[10];
	
	printf("informe os numeros:");
	
	for(i=0;i<10;i++){
		x[i]=(i+5*i)%(i+1);
		
		printf("%d ",x[i]);
	}
	 	
	return 0;
}

