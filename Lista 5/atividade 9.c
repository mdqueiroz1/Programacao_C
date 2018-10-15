#include<stdio.h>


int main(){
	
	char str[10];
	int cont;
	
	for(int i=0;i<10;i++){
	scanf("%c", &str[i]);
		if(str[i]==0){
			str[i]=1;
		}
	}
	
	printf("%s", str);
	
	return 0;
}
