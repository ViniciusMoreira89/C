#include <stdio.h>
int main(void){
	int tabela[3][4],contadorLinha,contadorColuna,par=0,impar=0;
	for(contadorLinha=0;contadorLinha<3;contadorLinha++){
		for(contadorColuna=0;contadorColuna<4;contadorColuna++){
			printf("\nDigite dado da linha %d coluna %d: ",contadorLinha+1,contadorColuna+1);
			scanf(" %d",&tabela[contadorLinha][contadorColuna]);
			if(tabela[contadorLinha][contadorColuna]%2==0){
				par++;
			}else{
				impar++;
			}
		}
	}
	printf("\nQuantidade de numeros pares: %d",par);
	printf("\nQuantidade de numeros impares: %d",impar);
	return 0;
}
