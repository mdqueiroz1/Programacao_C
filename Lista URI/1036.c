#include<stdio.h>
#include<math.h>

int main(){
	
	float a,b,c,delta,x1,x2;
		
	scanf("%f %f %f", &a,&b,&c);
	
	delta = (b*b) - (4 * a * c); 
	
	if(delta>0){
	delta = sqrt(delta);
	printf("%.5f", delta);
	}else if((a*2)==0){
	printf("Impossivel calcular");
	}
	
	return 0;
}
