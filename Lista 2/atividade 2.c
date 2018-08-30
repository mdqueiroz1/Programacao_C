#include<stdio.h>
#include<math.h>
/*
 Leia  um  numero  fornecido  pelo  usuario.   Se  esse  numero  for  positivo,  calcule  a  raiz quadrada do numero.
 Se o numero for negativo, mostre uma mensagem dizendo que o numero e invalido
*/
int main(){
	
	int x;
	scanf("%d", &x);
	
	if(x%2==0){
		printf("%d\n", sqrt(x));
	}else{
		printf("numero eh invalido.\n");
	}
	
	return 0;

}
