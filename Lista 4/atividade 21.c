#include<stdio.h>

int main(){
	
	int i, a[10],b[10],c[10];
	
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<10;i++){
		c[i]=a[i]-b[i];
	}
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	for(i=0;i<10;i++){
		printf("%d ",b[i]);
	}
	printf("\n");
	for(i=0;i<10;i++){
		printf("%d ",c[i]);
	}
return 0;
}
