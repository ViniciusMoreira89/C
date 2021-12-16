#include <stdio.h>

int main(void)
{

	float salarioAtual=0, salarioReajustado=0, fatorReajuste=0, maiorSalario=0;
	int quantidade, contagem, sequencia=1;
	
	printf("\nQuantidade de funcionarios na empresa: ");
	scanf(" %d", &quantidade, &contagem);
	
	printf("\n\nFator de reajuste salarial em porcentagem: ");
	scanf(" %f", &fatorReajuste);
	
	for(contagem=quantidade;contagem>=1;contagem=contagem-1){
		if(sequencia<=quantidade){
			printf("\n\nDigite o salario do %do de %d funcionarios: R$", sequencia, quantidade);
			scanf(" %f", &salarioAtual);
			salarioReajustado=((salarioAtual*fatorReajuste)/100)+salarioAtual;
			printf("\nO salario foi reajustado para: R$%.2f.", salarioReajustado);
			if(salarioReajustado>maiorSalario){
				maiorSalario=salarioReajustado;
			}
		}
		salarioAtual=0;
		salarioReajustado=0;
		sequencia++;
	}
	printf("\n\nO maior salario da empresa atualmente: R$%.2f.", maiorSalario);
}
