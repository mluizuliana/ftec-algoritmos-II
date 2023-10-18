#include<stdio.h>
#include<string.h>
int main(void){
	float valor,bonus;
	char sexo;
	printf("\nDigite o valor da compra: ");
	scanf("%f",&valor);
	printf("Digite F-Feminino ou M-Masculino: ");
	fflush(stdin);
	sexo = toupper(getchar()); //toupper para maíusculo e tolower() para minúsculo
	if (sexo == 'M'){
		bonus = valor * 15/100;
		valor = valor - bonus;	
	}
	printf("\n Valor do Bonus = %.2f", bonus);
	printf("\n Valor final da compra = %.2f", valor);
	return 0;
}
