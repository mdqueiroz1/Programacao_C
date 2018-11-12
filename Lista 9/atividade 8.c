#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	float x[10],*px;
	int i;
	px=x;
	
	for(i=0;i<10;i++){
		printf("%d\n", px[i]);
	}
	
	return 0;
}
