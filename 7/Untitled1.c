#include <stdio.h>

int main(void)
{
	char letra;
	int contA=0, contE=0, contI=0, contO=0, contU=0, total=0;
	printf("Digite uma letra: ");
	scanf(" %c", &letra);
	while(letra!='.'){
		switch(letra){
			case 'a':
				contA++;
				break;
			case 'e':
				contE++;
				break;
			case 'i':
				contI++;
				break;
			case 'o':
				contO++;
				break;
			case 'u':
				contU++;
				break;
		}
		printf("\nDigite outra letra: ");
		scanf(" %c", &letra);
	}
	total=contA+contE+contI+contO+contU;
	printf("\n\nTotal de vogais: %d.", total);
	printf("\nTotal de A: %d.", contA);
	printf("\nTotal de E: %d.", contE);
	printf("\nTotal de I: %d.", contI);
	printf("\nTotal de O: %d.", contO);
	printf("\nTotal de U: %d.", contU);
}
