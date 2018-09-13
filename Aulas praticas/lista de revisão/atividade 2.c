#include<stdio.h>
/*
2-Escrever um programa que receba do usuário o código de um produto escolhido do cardápio de uma
lanchonete e a sua quantidade. Em seguida, o programa deve calcular o valor a ser pago por aquele
lanche. Considere que a cada execução do programa somente será calculado um pedido de um produto.
O cardápio da lanchonete segue o padrão abaixo:
*/
int main(){
	
	float valor;
	int cod,qnt;
	printf("cod\tproduto\t\tpreco\n");
	printf("100\tcachorro quente\tR$1.20\n");
	printf("101\tbauru simples\tR$1.30\n");
	printf("102\tbauru com ovo\tR$1.50\n");
	printf("103\thamburguer\tR$5.00\n");
	printf("104\trefrigerante\tR$3.00\n");
	printf("105\tsuco lata\tR$4.00\n");
	
	printf("informe o codigo do produto e a quantidade de acordo com a tabela:(0 para sair)\n");
	do{
		scanf("%d %d", &cod, &qnt);
		if(cod>105||cod<100){
			printf("numero invalido.");
			break;
		}
		switch(cod){
		case 100:{
			valor=qnt*1.20;
			printf("%d cachorro quente(s): %.2f\n",qnt, valor);
			break;
		}
		case 101:{
			valor=qnt*1.30;
			printf("%d bauru(s) simples: R$%.2f\n",qnt, valor);
			break;
		}
		case 102:{
			valor=qnt*1.50;
			printf("%d bauru(s) com ovo: R$%.2f\n",qnt, valor);
			break;
		}
		case 103:{
			valor=qnt*5.00;
			printf("%d hamburguer(s): R$%.2f\n",qnt, valor);
			break;
		}
		case 104:{
			valor=qnt*3.00;
			printf("%d refrigerante(s): R$%.2f\n",qnt, valor);
			break;
		}
		case 105:{
			valor=qnt*4.00;
			printf("%d suco(s) lata: R$%.2f\n",qnt, valor);
			break;
		}
		}
	
	}while(cod<=105||cod>=100);
	
	return 0;
}
