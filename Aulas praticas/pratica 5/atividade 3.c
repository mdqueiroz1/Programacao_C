#include<stdio.h>

/*
3. 
Codifique, compile e execute um programa na linguagem C que leia 10 n�meros
inteiros quaisquer no intervalo de [0, 9] e armazene em um vetor.
Caso o usu�rio digite um valor fora do intervalo de [0, 9] o programa deve insistir at� que
seja fornecido um valor v�lido, entre 0 e 9 (
do while
).
Em seguida, calcule/exiba a quantidade de n�meros 2, 3 e 5 presentes na sequ�ncia.
(utilize a estrutura de decis�o 
switch
).
Entrada
Seu  programa  ter�  como  entrada   um  vetor  de   10   posi��es  de  n�meros  inteiros e
positivos.
Sa�da 
A sa�da de seu programa dever� ser a quantidade de n�meros 2, 3 e 5 presentes no seu
vetor de entrada, separados por um espa�amento e sem pulo de linha. 
*/

int main(){
	
	int i, x[10], dois=0, tres=0, cinco=0;
	
	printf("informe os numeros:\n");
	
	for(i=0;i<10;i++){
		do{
		scanf("%d", &x[i]);
		}while(x[i]<0 || x[i]>9);
	}
	for(i=0;i<10;i++){
		
		switch(x[i]){
			case 2:{
				dois++;
				break;
			}
			case 3:{
				tres++;
				break;
			}
			case 5:{
				cinco++;
				break;
			}
		}
	
	}
	printf("%d %d %d", dois, tres, cinco);
	return 0;
}
