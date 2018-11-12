#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	float x[3][3],**px;
	int i,j;
	*px=x;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t", px[i][j]);
		}
		printf("%d");
	}
	
	return 0;
}
