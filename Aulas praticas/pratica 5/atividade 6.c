#include<stdio.h>
#include<stdlib.h>

/*
6. 
Leia um vetor de 
char
 de 10 posições. Em seguida mostre apenas as vogais lidas e
depois mostre apenas as consoantes lidas.
Entrada
Seu programa deve ter como entrada um vetor de 10 posições de caracteres. 
Saída
Seu programa deve ter como saída as vogais lidas pela entrada.   
*/

int main(){
	
	int i;
	char x[10];
	
	printf("informe os caracteres:");
	
	for(i=0;i<10;i++){
		scanf(" %c", &x[i]);
	}
	
	
	for(i=0;i<10;i++){
		if(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u'){
			printf("%c ",x[i]);
		}
	}
	 	printf("\n");
	for(i=0;i<10;i++){
		if(x[i]!='a'&&x[i]!='e'&&x[i]!='i'&&x[i]!='o'&&x[i]!='u'){
			printf("%c ",x[i]);
		}
	}
	
	return 0;
}
