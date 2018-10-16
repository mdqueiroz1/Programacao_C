#include<stdio.h>
#include<string.h>

int main(){
	
	char str[20],caractere;
	int i,vogal=0;
	
	puts("String: \n");
	fflush(stdin);
	gets(str);
	fflush(stdin);
	puts("\n\nInforme a letra a ser substituida: ");
	scanf("%c",&caractere);
	fflush(stdin);
	puts("\n");
	
	for(i=0;str[i]!='\0';i++){
		if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'){
		vogal++;
		}else str[i]=caractere;
	}
	
	printf("String com o caractere %c: %s",caractere,str);
	
	return 0;
}
