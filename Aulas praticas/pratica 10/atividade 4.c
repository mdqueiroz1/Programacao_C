#include<stdio.h>
#include<stdlib.h>

int print_na_tela(char *p,int inicio, int fim){	
	
	if(inicio<=fim){
		print_na_tela(p,inicio+1, fim);
		printf("%c ", p[inicio]);
	}else	return 0;
}

int main(){
	
	char vogais[5]= {'a','e','i','o','u'};
	
	print_na_tela(vogais,0,6);
	
	return 0;
}
