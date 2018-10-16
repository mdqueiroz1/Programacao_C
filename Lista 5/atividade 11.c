#include<stdio.h>
#include<string.h>

int main(){
	
	char str[20];
	int i;
	
	fflush(stdin);
	gets(str);
	fflush(stdin);
		
	for(i=0;str[i]!='\0';i++){
		if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'){
		printf("%c",str[i]);
		}
	}

	return 0;
}
