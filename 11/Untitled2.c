#include <stdio.h>
int main(void){
	char letra;
	int vogal[5]={0,0,0,0,0},contagem;
	while(letra!='z'){
		printf("\nDigite uma letra (digite 'z' para terminar): ");
		scanf("%c",&letra);
		switch(letra){
			case 'a':
				vogal[0]++;
				break;
			case 'e':
				vogal[1]++;
				break;
			case 'i':
				vogal[2]++;
				break;
			case 'o':
				vogal[3]++;
				break;
			case 'u':
				vogal[4]++;
				break;
		}
	}
	for(contagem=0;contagem<5;contagem++){
		printf("%d",vogal[contagem]);
	}
	return 0;
}
