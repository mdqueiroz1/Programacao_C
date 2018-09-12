#include<stdio.h>

int main(){
	
	int i; 
	float x[10],media=0;
	
	for(i=0;i<10;i++){
		scanf("%f", &x[i]);
		media=media+x[i];
	}
	media=media/10.0;
	printf("%.2f", media)
	
	
	return 0;
}
