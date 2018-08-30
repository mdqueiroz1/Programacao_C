#include<stdio.h>
/*

A nota final de um estudante e calculada a partir de tres notas atribuidas entre o intervalo
de 0 ate 10, respectivamente, a um trabalho de laboratorio, a uma avaliacao semestral
e a um exame final.  A media das tres notas mencionadas anteriormente obedece aos
pesos:  Trabalho de Laboratorio:  2; Avaliacao Semestral:  3; Exame Final:  5.  De acordo
com o resultado,  mostre na tela se o aluno esta reprovado (media entre 0 e 2,9),  de
recuperacao (entre 3 e 4,9) ou se foi aprovado. Faca todas as verificacoes necessarias.

*/

int main(){
	
	float x,y,z,media;
		
	do{
	printf("forneca as 3 notas:\n");
	scanf("%f %f %f",&x,&y,&z);
	}while(x<0||x>10||y<0||y>10||z<0||z>10);
	
	media=(x*2+y*3+z*5)/10;
	
	if(media<5){
		printf("Reprovado!\n");		
	}else{
		printf("Aprovado!\n");
	}
	
	return 0;
}
