#include<stdio.h>

int main()
{
	int *p1, *p2, x,y;

	p1=&x;
	p2=&y;

	if(p1>p2){
		printf("%d\n",p1 );
	}else printf("%d\n",p2 );

	return 0;
}