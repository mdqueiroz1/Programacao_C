#include<stdio.h>

typedef struct sHora{
	int h,m,s;
}hora;

typedef struct sData{
	char dma[9];
}data;

typedef struct sCompromisso{
	char descricao[250];
	hora comp_hora;
	data comp_data;
	
}compromisso;

int main(){
	
	data data1;
	compromisso compromisso1;
	
	puts("Informe a hora\n");
	scanf("%d",compromisso1.comp_hora.h);
	puts("Informe a minutos\n");
	scanf("%d",compromisso1.comp_hora.m);
	puts("Informe a segundos\n");
	scanf("%d",compromisso1.comp_hora.s);
	
	puts("Informe a data (DD/MM/AAAA)\n");
	scanf("%s",&compromisso1.comp_data.dma);
	
	puts("descricao:\n");
	gets(compromisso1.descricao);
	
	return 0;
}
