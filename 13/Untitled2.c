#include <stdio.h>
int main(void){
	int matriz1[4][4],matriz2[4][4],linha,coluna;
	for(linha=0;linha<4;linha++){
		for(coluna=0;coluna<4;coluna++){
			printf("\nDigite dado da linha %d coluna %d: ",linha+1,coluna+1);
			scanf(" %d",&matriz1[linha][coluna]);
			matriz2[coluna][linha]=matriz1[linha][coluna];
		}
	}
	printf("\nMatriz 1 completa:\n");
	for(linha=0;linha<4;linha++){
		printf("\n");
		for(coluna=0;coluna<4;coluna++){
			printf("%d   ",matriz1[linha][coluna]);
		}
	}
	printf("\n\nMatriz 2 completa:\n");
	for(linha=0;linha<4;linha++){
		printf("\n");
		for(coluna=0;coluna<4;coluna++){
			printf("%d   ",matriz2[linha][coluna]);
		}
	}
	return 0;
}
