#include<stdio.h>

int pos_neg(int x){
	if(x==0) return 0;
	if(x<0) return (-1);
	if(x>0) return 1;
}

int main(){
	int x;
	
	scanf("%d", &x);
	
	pos_neg(x);
	
}
