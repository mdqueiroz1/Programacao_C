#include<stdio.h>

void data(int x, int y, int z){
	switch(y){
		case 1:{
			printf("%d de janeiro de %d",x,z);
			break;
		}
		case 2:{
			printf("%d de fevereiro de %d",x,z);
			break;
		}
		case 3:{
			printf("%d de marco de %d",x,z);
			break;
		}
		case 4:{
			printf("%d de abril de %d",x,z);
			break;
		}
		case 5:{
			printf("%d de maio de %d",x,z);
			break;
		}
		case 6:{
			printf("%d de junho de %d",x,z);
			break;
		}
		case 7:{
			printf("%d de julho de %d",x,z);
			break;
		}
		case 8:{
			printf("%d de agosto de %d",x,z);
			break;
		}
		case 9:{
			printf("%d de setembro de %d",x,z);
			break;
		}
		case 10:{
			printf("%d de outubro de %d",x,z);
			break;
		}
		case 11:{
			printf("%d de novembro de %d",x,z);
			break;
		}
		case 12:{
			printf("%d de dezembro de %d",x,z);
			break;
		}
	}
	return ;
}

int main(){
	
	int x,y,z;
	
	scanf("%d %d %d", &x,&y,&z);
	data(x,y,z);
	return 0;
}
