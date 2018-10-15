#include<stdio.h>
#include<string.h>

int main(){
	
	char str[10];
	int cont;
	int i;
	
	fflush(stdin);
	gets(str);
	fflush(stdin);
		
	cont=strlen(str);
	
	while (cont>0){
		printf("%c",str[cont]);
		cont--;
	}
	
	printf("%d",cont);
	
	return 0;
}
