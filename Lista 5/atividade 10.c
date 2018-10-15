#include<stdio.h>
#include<string.h>

int main(){
	
	char str[10],contrario[20];
	int cont;
	int i=0;
	
	fflush(stdin);
	gets(str);
	fflush(stdin);
		
	cont=strlen(str);
	
	while (cont!=0){
		contrario[i]=str[cont];
		cont--;
		i++;
	}
	
	puts(contrario);
	
	return 0;
}
