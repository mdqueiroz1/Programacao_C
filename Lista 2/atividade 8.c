#include<stdio.h>
/*
Fac ¸a um programa que leia 2 notas de um aluno, verifique se as notas sao validas e
exiba na tela a media destas notas.  Uma nota valida deve ser,  obrigatoriamente,  um
valor entre 0.0 e 10.0, onde caso a nota nao possua um valor valido, este fato deve ser
informado ao usuario e o programa termina.
*/

int main(){
	
	float x,y;
	printf("Digite as notas:\n");
	scanf("%f %f",&x,&y);
	
	if((x<=10&&x>=0)&&(y<=10&&y>=0)){
		printf("%.2f",(x+y)/2);
	}else {
		printf("Numeros invalidos\n");
	}
	
	return 0;
}
