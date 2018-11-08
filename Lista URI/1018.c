#include<stdio.h>
#include<math.h>

int main(){
	
	int resto,valor,cem,cinquenta,vinte,dez,cinco,dois,um;
	
	scanf("%d", &valor);
	printf("%d\n",valor);
	cem=valor/100;
	printf("%d nota(s) de R$ 100,00\n",cem);
	
	resto=valor%100;
	cinquenta=resto/50;
	printf("%d nota(s) de R$ 50,00\n",cinquenta);
	
	resto=resto%50;
	vinte=resto/20;
	printf("%d nota(s) de R$ 20,00\n",vinte);
	
	resto=resto%20;
	dez=resto/10;
	printf("%d nota(s) de R$ 10,00\n",dez);
	
	resto=resto%10;
	cinco=resto/5;
	printf("%d nota(s) de R$ 5,00\n",cinco);

	resto=resto%5;
	dois=resto/2;
	printf("%d nota(s) de R$ 2,00\n",dois);
	
	resto=resto%2;
	um=resto/1;
	printf("%d nota(s) de R$ 1,00\n",um);
			
	return 0;
}
