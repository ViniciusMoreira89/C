#include <stdio.h>

int main(void)
{

	float salAtual=0, salMaior=0, salSoma=0, salMedia;
	int quantidade, contagem, sequencia=1, seqSalMaior;
	
	printf("\nQuantos funcionários trabalham na empresa?\n");
	scanf(" %d", &quantidade, &contagem);
		
	
	for (contagem=quantidade;contagem>=1;contagem=contagem-1){
		if(sequencia<=quantidade){
			printf("\nDigite o salario do %do de %d funcionarios:\n", sequencia, quantidade);
			printf("R$");
			scanf(" %f", &salAtual);
			if(salAtual>salMaior){
			salMaior=salAtual;
			seqSalMaior=sequencia;
			}
			sequencia++;
			salSoma=salSoma+salAtual;
		}
	}
	salMedia=salSoma/quantidade;
	printf("\nO maior salario foi de R$%.2f do %do funcionario.\n", salMaior, seqSalMaior);
	printf("\nMedia salarial da empresa: R$%.2f.", salMedia);
}
