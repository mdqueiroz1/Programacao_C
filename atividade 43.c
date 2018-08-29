#include<stdio.h>
//atividade 43
int main(){
	
	float x;
	scanf("%f", &x);
	
	printf("c/ desconto %.2f", x-(x*0.1));
	printf("parcelado em 3x %.2f", x/3);
	printf("comissão a vista %.2f", x-(x*0.05));
	return 0;
	
}
