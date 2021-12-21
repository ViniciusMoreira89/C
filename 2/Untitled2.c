#include <stdio.h>

int main(){
	int numeros[10],contagem;
	for(contagem=0;contagem<10;contagem++){
		printf("\nDigite um numero: ");
		scanf(" %d",&numeros[contagem]);
	}
	printf("\n\nOrdem inversa:\n");
	for(contagem=9;contagem>=0;contagem--){
		printf("%d\n",numeros[contagem]);
	}
	return 0;
}
