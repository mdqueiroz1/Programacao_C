#include<stdio.h>

int main(){
	int x,y, x1,y1;
	
	scanf("%d%d",&x,&y);
	y1= y%2;
	x1= x%2;
	if(x>y){
		
		if(x1==0){
		printf("%d maior e par\n",x);
		}else{
		printf("%d maior e impar\n",x);
		}
		y1= y%2;
		if(y1==0){
		printf("%d menor e par\n",y);
		}else{
		printf("%d menor e impar\n",y);
		}
	}else{
		
		if(y1==0){
		printf("%d maior e par\n",y);
		}else{
		printf("%d maior e impar\n",y);
		}
		x1= x%2;
		if(x1==0){
		printf("%d menor e par\n",x);
		}else{
		printf("%d menor e impar\n",x);
		}
	}
return 0;	
}
