#include <stdio.h>
int main(){
	float notas[5],mediaTurma,somaTurma=0;
	int contagem;
	for(contagem=0;contagem<5;contagem++){
		printf("\nInsira nota do aluno %d: ",contagem+1);
		scanf(" %f",&notas[contagem]);
		somaTurma=somaTurma+notas[contagem];
	}
	mediaTurma=somaTurma/(contagem+1);
	for(contagem=0;contagem<5;contagem++){
		if(notas[contagem]>=mediaTurma){
			printf("\nO aluno %d esta acima da media da turma %.2f com a nota %.2f",contagem+1,mediaTurma,notas[contagem]);
		}
	}
	return 0;
}
