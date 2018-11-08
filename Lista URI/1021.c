#include<stdio.h>
#include<math.h>

int main(){
	
	float valor;
	int resto,valorint,restoint,cem,cinquenta,vinte,dez,cinco,dois,um;
	scanf("%f", &valor);
	valorint=valor;
	restoint=(valor*100)-(valorint*100);
	printf("NOTAS:\n");
	cem=valorint/100;
	printf("%d nota(s) de R$ 100.00\n",cem);
	
	resto=valorint%100;
	cinquenta=resto/50;
	printf("%d nota(s) de R$ 50.00\n",cinquenta);
	
	resto=resto%50;
	vinte=resto/20;
	printf("%d nota(s) de R$ 20.00\n",vinte);
	
	resto=resto%20;
	dez=resto/10;
	printf("%d nota(s) de R$ 10.00\n",dez);
	
	resto=resto%10;
	cinco=resto/5;
	printf("%d nota(s) de R$ 5.00\n",cinco);

	resto=resto%5;
	dois=resto/2;
	printf("%d nota(s) de R$ 2.00\n",dois);
	
	printf("MOEDAS:\n");
	resto=resto%2;
	um=resto/1;
	printf("%d moeda(s) de R$ 1.00\n",um);
	
	cinquenta=restoint/50;
	printf("%d moeda(s) de R$ 0.50\n",cinquenta);
	
	restoint=restoint%50;
	vinte=restoint/25;
	printf("%d moeda(s) de R$ 0.25\n",vinte);
	
	restoint=restoint%25;
	dez=restoint/10;
	printf("%d moeda(s) de R$ 0.10\n",dez);
	
	restoint=restoint%10;
	cinco=restoint/5;
	printf("%d moeda(s) de R$ 0.05\n",cinco);
	
	restoint=restoint%5;
	um=restoint/1;
	printf("%d moeda(s) de R$ 0.01\n",um);
	
	return 0;
}
