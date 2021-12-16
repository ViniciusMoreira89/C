#include <stdio.h>

int main(void){
	int  numero;
	printf("Digite um numero (0 ou 9 para finalizar programa): ");
	scanf(" %d", &numero);
	while(numero!=0&&numero!=9){
		if(numero%2==0){
			printf("\nNumero identificado como par, numero seguinte: %d",numero+1);
		}else{
			printf("\nNumero identificado como impar, numero anterior: %d",numero-1);
		}
		printf("\nDigite outro numero (0 ou 9 para finalizar programa): ");
		scanf(" %d", &numero);
	}
	printf("\nFim do programa.");
}
