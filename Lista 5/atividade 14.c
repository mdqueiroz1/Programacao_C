#include<stdio.h>
#include<string.h>

int main(){
	
	char str[50];
	int i;
	
	fflush(stdin);
	gets(str);
	fflush(stdin);
			
	for(i=0;str[i]!='\0';i++){
		str[i]=str[i]+1;
	}
	printf("%s", str);
	
	return 0;
}
