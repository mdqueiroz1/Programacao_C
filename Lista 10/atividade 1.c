#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int i, *p;
	
	p= (int*) malloc(5*sizeof(int));
	
	for(i=0;i<5;i++){
	scanf("%d", &p[i]);
	}
	for(i=0;i<5;i++){
		printf("%d",p[i]);
	}
	free (p);
	return 0;
}
