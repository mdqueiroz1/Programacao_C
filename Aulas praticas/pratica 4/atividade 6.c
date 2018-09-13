#include<stdio.h>
/*
Deseja-se fazer uma pesquisa a respeito do consumo mensal de energia
elétrica em uma determinada rua, que possui 15 residências. Para isto, devem
ser lidos os seguintes dados:
- preço do Kwh
- quantidade de Kwh consumidos para cada residência
A pesquisa termina após a leitura das quantidades consumidas para as 15
residências e, em seguida calcula e exibe os seguintes dados:
- o consumo médio verificado
- o maior valor de consumo verificado
- o menor valor de consumo verificado
*/
int main(){
	int i;
	float kw,maior=0,menor=9999,media=0,preco;
	
	printf("informe o preco do Kwh");
	scanf("%d",&preco);
	
	printf("Quantidade de Kwh consumido em 15 residencias:\n");
	for(i=0;i<15;i++){
		scanf("%f",&kw);
		if(kw>maior){
			maior=kw;
		}else if(kw<menor){
			menor=kw;
		}
		media=media+kw;
	}
	media=media/15;
	
	printf("%.2f %.2f %.2f\n",media,menor, maior);
	


return 0;
}
