#include<stdio.h>

int main(){
	
	int x,y,z;
		
	printf("Escolha a opcao:\n1- Soma de 2 numeros.z\n2- Diferenca entre 2 numeros (maior pelo menor).\n");
	printf("3- Produto entre 2 numeros.\n4- Divisao entre 2 numeros (o denominador nao pode ser zero).");
	
	printf("\nOpcao");
	scanf("%d",&x);
	printf("Numeros:\n");
	scanf("%d %d", &y, &z);
	
		if(x==4&&z==0){
			do{
				scanf("%d", &z);
			}while(z==0);
		}
	switch(x){
		case 1:{
			printf("Soma: %d + %d", z+y);
			break;
		}
		case 2:{
			printf("Subtração: %d + %d", z-y);
			break;
		}
		case 3:{
			printf("Multiplicacao: %d + %d", y*z );
			break;
		}
		case 4:{
			printf("Divisao: %d + %d", y/z);
			break;
		}
	}	
	
	return 0;
}
