#include<stdio.h>

int main(){
	
	int x,y,*px,*py;
	
	scanf("%d %d", &x, &y);
	
	px=&x;
	py=&y;
	
	if(px>py){
		printf("%d %d\n",*px, px);
	}else	printf("%d %d\n",*py, py);
	
	return 0;
	
}
