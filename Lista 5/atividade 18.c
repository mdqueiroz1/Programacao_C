#include<stdio.h>

int main()
{
	char str[20],l1,l2;
	int i;
	puts("informe a string:\n");
	gets(str);
	
	fflush(stdin);
	scanf("%c %c", &l1, &l2);
	fflush(stdin);
	
	for(i=0;str[i]!='\0';++i){
		if(str[i]==l1){
			str[i]=l2;
		}
	}
	printf("%s", str);
	
	return 0;
}
