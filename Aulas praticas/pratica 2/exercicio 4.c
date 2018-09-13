#include<stdio.h>


int main(){
	
	char cont;
	
	scanf("%c", &cont);
	
	if(cont=='A') cont= 'a';
	if(cont=='B') cont= 'b';
	if(cont=='C') cont= 'c';
	if(cont=='D') cont= 'd';
	if(cont=='E') cont= 'e';

	switch(cont){
		case 'a': printf("Ventilador, Televisao.\n");
		break;
		case 'b': printf("Aparelho de Som, Batedeira.\n");
		break;
		case 'c': printf("Fogao eletrico, liquidificador.\n");
		break;
		case 'd':  printf("Freezer, geladeira, maquina de lavar\n");
		break;
		case 'e': printf("Ar-condicionado, microondas");
		break;
		default: printf("invalido!");
		break;
	}
	return 0;
}
