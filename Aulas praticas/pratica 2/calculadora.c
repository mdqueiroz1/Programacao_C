#include<stdio.h>

int main(){
	
	int x,y,result;
	char operador;
	
	scanf("%d",&x);
	fflush(stdin);
	scanf("%c",&operador);
	fflush(stdin);
	scanf("%d",&y);
	
	switch (operador){
	case '+': result= x+y;
	break;
	case '-': result= x-y;
	break;
	case '*': result= x*y;
	break;
	case '/': if(y!=0){
				result= x/y;
		}else printf("Divisao por 0 nao existe!");
	break;
	default:printf("operador invalido!!");
	}

return 0;
}
