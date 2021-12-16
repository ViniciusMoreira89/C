#include <stdio.h>
int main(void){
	float nota[10],soma=0,media;
	int contagem;
	for(contagem=0;contagem<10;contagem++){
		printf("\nInsira nota: ");
		scanf("\n%f",&nota[contagem]);
		soma=soma+nota[contagem];
	}
	media=soma/10;
	printf("\nMedia da turma: %.2f",media);
	printf("\nNotas acima:\n");
	for(contagem=0;contagem<10;contagem++){
		if(nota[contagem]>=media){
			printf("\n%.2f\n",nota[contagem]);
		}
	}
}
