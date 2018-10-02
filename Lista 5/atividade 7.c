#include<stdio.h>
#include<string.h>

int main(){
	
	int i;
	char vetor1[20],vetor2[20];
	puts("informe uma string:\n");
	gets(vetor1);
	puts("informe outra string:\n");
	gets(vetor2);

	while(vetor1!='\0'){

		if(i==strlen(vetor1)){
			printf("strings iguais!\n");
		}else{
			puts("strings diferentes!\n");
			break;
		}
		i++;
	}
	
	return 0;
}
