#include <stdio.h>
int main(void){
	float prova1[5],prova2[5],prova3[5],somaProva1=0,somaProva2=0,somaProva3=0,mediaProva1,mediaProva2,mediaProva3,somaTurma=0,mediaTurma;
	int contagem;
	for(contagem=0;contagem<5;contagem++){
		printf("\nNota 1 do aluno %d: ",contagem+1);
		scanf(" %f",&prova1[contagem]);
		printf("\nNota 2 do aluno %d: ",contagem+1);
		scanf(" %f",&prova2[contagem]);
		printf("\nNota 3 do aluno %d: ",contagem+1);
		scanf(" %f",&prova3[contagem]);
		somaProva1=somaProva1+prova1[contagem];
		somaProva2=somaProva2+prova2[contagem];
		somaProva3=somaProva3+prova3[contagem];
		somaTurma=somaTurma+prova1[contagem]+prova2[contagem]+prova3[contagem];
	}
	mediaTurma=somaTurma/15;
	mediaProva1=somaProva1/5;
	mediaProva2=somaProva2/5;
	mediaProva3=somaProva3/5;
	printf("\nA media da turma foi %.2f.",mediaTurma);
	printf("\nA media de cada prova foi %.2f, %.2f e %.2f, respectivamente.",mediaProva1,mediaProva2,mediaProva3);
	for(contagem=0;contagem<5;contagem++){
		printf("\nA media do aluno %d foi %.2f",contagem+1,(prova1[contagem]+prova2[contagem]+prova3[contagem])/3);
	}
	return 0;
}
