#include <stdio.h>

int main(void){
	int num[10],contagem;
	for(contagem=0;contagem<10;contagem++){
		printf("\nDigite um numero:");
		scanf("%d",&num[contagem]);
	}
	for(contagem=9;contagem>=0;contagem--){
		printf("\n%d\n",num[contagem]);
	}
	return 0;
}
