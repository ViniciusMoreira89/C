#include <stdio.h>
int main(void){
	int tabela[5][5],linha,coluna;
	for(linha=0;linha<5;linha++){
		printf("\n");
		for(coluna=0;coluna<5;coluna++){
			if(linha==coluna){
				tabela[linha][coluna]=0;
			}else{
				tabela[linha][coluna]=1;
			}
			printf("%d ",tabela[linha][coluna]);
		}
	}
	return 0;
}
