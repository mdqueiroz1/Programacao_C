#include<stdio.h>
/*
O quadrado de um n�mero natural n � dado pela soma dos n primeiros n�meros �mpares consecutivos. Por exemplo:
1� = 1
2� = 1+3
3� = 1+3+5
4� = 1+3+5+7
Dado um n�mero n, calcule seu quadrado usando a soma de �mpares ao inv�s do produto.
*/
int main(){
	int i,j,potencia=0;
	
	printf("informe o numero a ser calculado:\n");
	scanf("%d",&i);
	
	while(i>0){
		if(j%2!=0){
		potencia=potencia+j;
		i--;
		}
		j++;
	}
	printf("%d",potencia);
return 0;
}
