#include<stdio.h>


int main(){
	
	float x;
	scanf("%d",&x);
	if(x<0 || x>100.00){
		printf("Fora de intervalo\n");
	}else	if(x>0 && x<=25){
		printf("Intervalo [0,25]\n");
	}else if(x>25.00 && x<=50.00){
		printf("Intervalo (25,50]\n");
	}else if(x>50.00 && x<=75.00){
		printf("Intervalo (50,75]\n");
	}else if(x>75.00 && x<=100.00){
		printf("Intervalo (75,100]\n");
	}
	
	return 0;
}
