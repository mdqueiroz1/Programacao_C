#include<stdio.h>
/*

Faca um algoritmo que calcule a media ponderada das notas de 3 provas.  A primeira e
a segunda prova tem peso 1 e a terceira tem peso 2. Ao final, mostrar a media do aluno
e indicar se o aluno foi aprovado ou reprovado. A nota para aprovacao deve ser igual ou
superior a 60 pontos.

*/

int main(){
	
	float x,y,z,media;
	
	do{
	printf("forneca as 3 notas:\n");
	scanf("%f %f %f",&x,&y,&z);
	}while(x<0||x>100||y<0||y>100||z<0||z>100);
	
	media=(x+y+z*2)/3;
	
	if(media<60){
		printf("Reprovado!\n");		
	}else{
		printf("Aprovado!\n");
	}
	
	return 0;
}
