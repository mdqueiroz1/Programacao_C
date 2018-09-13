#include<stdio.h>
#include<math.h>

int main(){
	
	int x=1000,y,z,a,b,c;
	
	while(x<=9999){
		a= x/100;
		b= a*100;
		c= x-b;
		y= a+c;
		z= pow(y,2);
		
		if(x==z) printf("%d\n",x);
		
		x++;
	}

return 0;
}
