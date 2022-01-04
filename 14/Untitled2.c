#include <stdio.h>
int main(void){
	int tabela[3][3],linha,coluna,maior=0,contagemMaior=0;
	for(linha=0;linha<3;linha++){
		for(coluna=0;coluna<3;coluna++){
			printf("Digite dado da linha %d coluna %d: ",linha+1,coluna+1);
			scanf(" %d",&tabela[linha][coluna]);
			if (tabela[linha][coluna]>maior){
				maior=tabela[linha][coluna];
			}
		}
	}
	for(linha=0;linha<3;linha++){
		for(coluna=0;coluna<3;coluna++){
			if(tabela[linha][coluna]==maior){
				contagemMaior++;
			}
		}
	}
	printf("\nMaior numero da tabela: %d.\nQuantidade de repeticoes: %d.",maior,contagemMaior);
	return 0;
}
