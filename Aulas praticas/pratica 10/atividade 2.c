#include<stdio.h>
#include<stdlib.h>

int print_na_tela(int inicio, int fim){
	
	if(inicio<=fim){
		print_na_tela(inicio+1, fim);
		printf("%d ", inicio);
	}else	return 0;
}

int main(){
	
	print_na_tela(1,10);
	
	return 0;
}
