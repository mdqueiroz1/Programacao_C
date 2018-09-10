#include<stdio.h>

int main(){
	
	int a,x,y,z;
	
	printf("Informe os numeros para a operacao:\n");
	scanf("%d %d", &x, &y);
	printf("informe a operação:\n1-adicao\n2-subtracao\n3-multiplicacao\n4-divisao\n");
	do{
	scanf("%d",&z);
	}while(z>4||z<1);
	
	switch(z){
		case 1:{
			printf("%d + %d = %d",x,y,x+y);
			break;
		}
		case 2:{
			printf("%d - %d = %d",x,y,x-y);
			break;
		}
		case 3:{
			printf("%d x %d = %d",x,y,x*y);
			break;
		}
		case 4:{
			printf("%d / %d = %d",x,y,x/y);
			break;
		}
	}
	
	return 0;
	
}
