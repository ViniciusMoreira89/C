#include <stdio.h>

int main(){
	int opcao;
	
	//c�digo em if
	//printf("Entre com um numero inteiro:\n");
	//scanf(" %d", &opcao);
		
	//if(opcao >= 0){
	//	if(opcao == 0){
	//		printf("\nNumero nulo.\n");
	//	} else{
	//		printf("\nNumero positivo.\n");
	//	}
	//} else{
	//	printf("\nNumero negativo.\n");
	
	//c�digo em switch, indicado pra menu com n�mero definido de op��es
	printf("Entre com 1 para adicionar e 2 para excluir:\n");
	scanf(" %d", &opcao);
	switch(opcao){
		case 1: {
			printf("\nNumero 1\n");
			break;
		}
		
		case 2: {
			printf("\nNumero 2\n");
			break;
		}
		
		default: printf("\nOpcao invalida.\n");
		
	}
	
	printf("\nFinal do programa.\n");
	
}

