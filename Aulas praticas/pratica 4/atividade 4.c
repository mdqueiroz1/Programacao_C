#include<stdio.h>
/*
O quadrado de um número natural n é dado pela soma dos n primeiros números ímpares consecutivos. Por exemplo:
1² = 1
2² = 1+3
3² = 1+3+5
4² = 1+3+5+7
Dado um número n, calcule seu quadrado usando a soma de ímpares ao invés do produto.
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
