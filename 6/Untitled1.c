#include <stdio.h>

int main(void)
{

	int numero, contagem, somaPar, somaImpar;
	
	printf("\nDigite um numero: ");
	scanf(" %d", &numero);
	
	printf("\n\nLista de numeros:");
	
	for(contagem=1;contagem<=numero;contagem++){
		printf("\n%d", contagem);
		if(contagem%2==0){
			somaPar=somaPar+contagem;
		}	else{
				somaImpar=somaImpar+contagem;
			}
	}
	printf("\n\nSoma dos numeros pares: %d", somaPar);
	printf("\n\nSoma dos numeros impares: %d", somaImpar);
}
