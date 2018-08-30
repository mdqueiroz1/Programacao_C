#include<stdio.h>
/*
Usando switch,  escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia
da semana correspondente a este numero.  Isto e, domingo se 1, segunda-feira se 2, e
assim por diante.
*/
int main(){
	int x;
	scanf("%d", &x);
	
	switch(x){
	
		case 1: {
			printf("Domingo");
			break;
		}
		case 2:{
			printf("Segunda-feira");
			break;
		} 
		case 3:{
			printf("Terca-feira");
			break;
		} 
		case 4:{
			printf("Quarta-feira");
			break;
		}
		case 5:{
			printf("Quinta-feira");
			break;
		}
		case 6:{
		printf("Sexta-feira");
		break;
		}
		case 7:{
			printf("Sabado");
			break;
		}
		default:	printf("Numero invalido");
	}

	return 0;
}
