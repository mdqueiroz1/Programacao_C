#include<stdio.h>

int main(){
	
	int x,y;
	
	scanf("%d %d", &x, &y);
	
	switch(x){
		case 1:{
			printf("Total: R$ %.2f\n",(4.0*y));
			break;
		}
		case 2:{
			printf("Total: R$ %.2f\n",(4.5*y));
			break;
		}
			case 3:{
			printf("Total: R$ %.2f\n",(5.0*y));
			break;
		}
			case 4:{
			printf("Total: R$ %.2f\n",(2.0*y));
			break;
		}
			case 5:{
			printf("Total: R$ %.2f\n",(1.5*y));
			break;
		}
	}
	
	return 0;
}
