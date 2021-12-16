#include <stdio.h>

int main(void)
{

	int numero, quantidade, contagem, sequencia=1, erro=0;
	
	printf("\nDigite um numero.\n");
	scanf(" %d", &numero);
	
	printf("\nDigite a quantidade de vezes a ser repetido.\n");
	scanf(" %d", &quantidade, &contagem);
	
	
	while(quantidade <= 0){
		printf("\nDigite numero maior ou igual a 1:\n");
		erro = scanf(" %d", &quantidade, & contagem);
	}
	
	for (contagem=quantidade;contagem>=1;contagem=contagem-1){
		if(sequencia<=quantidade){
			printf("\n%d", sequencia);
			sequencia++;
		}
		printf(" - %d\n", numero);
	}

}
