#include <stdio.h>
int main(void){
	int tabela[4][4],linha,coluna;
	for(linha=0;linha<4;linha++){
		for(coluna=0;coluna<4;coluna++){
			if(linha==coluna){
				tabela[linha][coluna]=0;
				printf("\nPosicao na diagonal principal [%d][%d], valor zero.\n",linha+1,coluna+1);
			}else{
				printf("\nDigite dado da linha %d coluna %d: ",linha+1,coluna+1);
				scanf(" %d",&tabela[linha][coluna]);
			}
		}
	}
	printf("\nMatriz completa:\n");
	for(linha=0;linha<4;linha++){
		printf("\n");
		for(coluna=0;coluna<4;coluna++){
			printf("%d    ",tabela[linha][coluna]);
		}
	}
	return 0;
}
