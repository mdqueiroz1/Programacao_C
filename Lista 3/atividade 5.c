#include<stdio.h>

int main(){
	
	int x=1,y=0;
	
	while(y<5){
		if(x%3==0){
			printf("%d ",x);
			y++;
		}
		x++;
	}
	
	return 0;
	
}
