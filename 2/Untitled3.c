#include <stdio.h>

int main(void)
{

	int numAtual=0, numMaior=0, quantidade, contagem, sequencia=1;
	
	printf("\nQuantos numeros deseja comparar?\n");
	scanf(" %d", &quantidade, &contagem);
		
	
	for (contagem=quantidade;contagem>=1;contagem=contagem-1){
		if(sequencia<=quantidade){
			printf("\nDigite o %do numero de %d:\n", sequencia, quantidade);
			scanf(" %d", &numAtual);
			sequencia++;
			if(numAtual>numMaior){
				numMaior=numAtual;
			}
		}
	}
	printf("\nO maior numero foi %d.", numMaior);

}
