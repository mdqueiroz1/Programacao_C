#include<stdio.h>
#include<math.h>

int main(){

int cont,x,y;

	scanf("%d", &cont);
	
	x=cont;
	
	while(cont>=1){
		if(x%cont==0){
		printf("%d ",cont);
		}
	cont--;
	}

return 0;
}
