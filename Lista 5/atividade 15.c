#include<stdio.h>

int main()
{
	char str[20];
	int i;
	gets(str);
	
	for(i=0;str[i]!='\0';++i){
		if(str[i]>64&&str[i]<91){
			str[i]=str[i]+32;
		}
	}
	printf("%s\n",str);

	return 0;
}
