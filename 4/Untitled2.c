#include <stdio.h>
int main(){
	int vetor1[10],vetor2[10],contagem;
	for(contagem=0;contagem<10;contagem++){
		printf("\nDigite um numero: ");
		scanf(" %d",&vetor1[contagem]);
		if(vetor1[contagem]%2==0){
			vetor2[contagem]=vetor1[contagem]+1;
		}else{
			vetor2[contagem]=vetor1[contagem]-1;
		}
	}
	printf("\n\nConteudo do primeiro vetor:\n");
	for(contagem=0;contagem<10;contagem++){
		printf("%d ",vetor1[contagem]);
	}
	printf("\n\nConteudo do segundo vetor:\n");
	for(contagem=0;contagem<10;contagem++){
		printf("%d ",vetor2[contagem]);
	}
}
