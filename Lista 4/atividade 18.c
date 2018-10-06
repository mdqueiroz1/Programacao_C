#include<stdio.h>


int main(){
	
	int i, vetor[10],x;
	
	for(i=0;i<10;i++){
		scanf("%d", &vetor[i]);
	}
	scanf("%d", &x);
	printf("multiplos: ");
	for(i=0;i<10;i++){
		if(vetor[i]%x==0){
			printf("%d ");
		}
	}
	printf("\n");
	
	return 0;
}
