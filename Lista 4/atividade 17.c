#include<stdio.h>

int main()
{
	
	int vetor[10];

	for (int i = 0; i < 10; i++)
	{
	
		scanf("%d",vetor[i]);
		if(vetor[i]<0){
			vetor[i]=0;
		}
	}

	for (int i = 0; i < 10; ++i)
	{
		printf("%d",vetor[i]);
	}

	return 0;
}