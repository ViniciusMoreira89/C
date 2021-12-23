#include <stdio.h>
int main(void){
	int vetor1[10],vetor2[5],contagem,contagem2;
	for(contagem=0;contagem<10;contagem++){
		printf("\nDigite numeros para armazenar: ");
		scanf(" %d",&vetor1[contagem]);
	}
	for(contagem=0;contagem<5;contagem++){
		printf("\nDigite numeros para leitura: ");
		scanf(" %d",&vetor2[contagem]);
	}
	printf("\n\nNumeros e posicoes contidos: \n");
	for(contagem=0;contagem<5;contagem++){
		for(contagem2=0;contagem2<10;contagem2++){
			if(vetor2[contagem]==vetor1[contagem2]){
				printf("\nNumero %d do vetor 2 contido na posicao %d do vetor 1.\n",vetor2[contagem],contagem2+1);
			}
		}
	}
return 0;
}
