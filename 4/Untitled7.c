#include <stdio.h>

int main(void)
{

	float notaAtual=0, notaSoma=0, notaMedia=0, mediaMinima;
	int quantidade, contagem, sequencia=1, provas, contProvas, seqProvas=1;
	
	printf("\nQuantidade de alunos nesta turma: ");
	scanf(" %d", &quantidade, &contagem);
	
	printf("\n\nQuantidade de provas aplicadas: ");
	scanf(" %d", &provas, &contProvas);
	
	printf("\n\nMedia minima para aprovacao: ");
	scanf(" %f", &mediaMinima);
	
	for(contagem=quantidade;contagem>=1;contagem=contagem-1){
		if(sequencia<=quantidade){
			for(contProvas=provas;contProvas>=1;contProvas=contProvas-1){
				if(seqProvas<=provas){
				printf("\n\nDigite a %da nota de %d do %do de %d alunos: ", seqProvas, provas, sequencia, quantidade);
				scanf(" %f", &notaAtual);
				notaSoma=notaSoma+notaAtual;
				seqProvas++;
				}
			}
			notaMedia=notaSoma/provas;
			if(notaMedia>=mediaMinima){
				printf("\n\nO %do aluno foi aprovado com a media %.2f.", sequencia, notaMedia);
				} else {
					printf("\n\nO %do aluno foi reprovado com a media %.2f.", sequencia, notaMedia);
				}
			seqProvas=1;
			notaAtual=0;
			notaSoma=0;
			contProvas=provas;
			sequencia++;
		}
	}
}
