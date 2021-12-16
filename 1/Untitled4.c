#include <stdio.h>
int main(){
	float salarioBruto,salarioLiquido;
	int contagem=1,impostoTotal,imposto;
	char sair;
	do{
		printf("\nDigite o salario bruto(ou qualquer letra para finalizar): ");
		scanf(" %f",&salarioBruto);
		if(salarioBruto<=999){
			imposto=10;
			impostoTotal=salarioBruto*0.1;
			salarioLiquido=salarioBruto*0.9;
		}else if(salarioBruto>999&&salarioBruto<=1999){
			imposto=15;
			impostoTotal=salarioBruto*0.15;
			salarioLiquido=salarioBruto*0.85;
		}else if(salarioBruto>1999&&salarioBruto<=9999){
			imposto=20;
			impostoTotal=salarioBruto*0.2;
			salarioLiquido=salarioBruto*0.80;
		}else if(salarioBruto>9999&&salarioBruto<=99999){
			imposto=25;
			impostoTotal=salarioBruto*0.25;
			salarioLiquido=salarioBruto*0.75;
		}else{
			imposto=30;
			impostoTotal=salarioBruto*0.3;
			salarioLiquido=salarioBruto*0.7;
		}
		printf("\nSalario bruto: %.2f.",salarioBruto);
		printf("\nImposto equivalente a %d%%: %d.",imposto,impostoTotal);
		printf("\nSalario liquido: %.2f.\n",salarioLiquido);
		contagem++;
	}while(contagem<=15);
}
