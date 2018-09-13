#include<stdio.h>
/*
3. Faça um programa que, para um número indeterminado de pessoas: leia a idade de cada uma, sendo
que a idade 0 (zero) indica o fim da leitura e não deve ser considerada. A seguir calcule:
•Idade média do grupo para pessoas com mais de 45 anos
•A menor idade e a maior idade
*/
int main(){
	
	int idade,maior=0,menor=999,media=0,cont=0;
	printf("informe a idade:(0 para sair)");
	
	do{
	scanf("%d", &idade);
	
	if(idade==0){
		break;
	}else if(idade>maior){
	 maior=idade;
	}else if(idade<menor){
	menor=idade;
	}else if(idade>=45){
	media=media+idade;
	cont++;
	}
	
	}while(idade>0);
	printf("maior idade: %d",maior);
	printf("menor idade: %d",menor);
	media=media/cont;
	printf("media de idade +45: %d",media);

	return 0;
}
