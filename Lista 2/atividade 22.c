#include<stdio.h>

int main(){
	
	int x,y;
		printf("informe a idade e o tempo de trabalho: ");
	scanf("%d %d", &x,&y);
	
	if(x>=65||y>=30||(x>=60&&y>=25)){
		printf("Pode se aposentar");
	}else{
		printf("nao pode se aposentar");
	}
	
	return 0;
}
