#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	int i;
	
	int *p, x;
	p = &x;
	
	for(i=0;i<5;i++){
		scanf("%d", &p[i]);
	}
		
	for(i=0;i<5;i++){
		printf("%d ", (p[i])*2);
	}
	
	return 0;
}
