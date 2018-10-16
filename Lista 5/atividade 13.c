#include<stdio.h>
#include<string.h>

int main(){
	
	char str[20],caractere;
	int i,espaco=0;
	
	puts("String: \n");
	fflush(stdin);
	gets(str);
	fflush(stdin);
	
	for(i=0;str[i]!='\0';i++){
		if(str[i]==' '){
		espaco++;
		}
	}
	
	printf("Espacos: %d",espaco);
	
	return 0;
}
