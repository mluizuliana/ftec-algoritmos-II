#include<stdio.h>
int main(void)
{
	float ingresso;
	int idade;
	printf("\nDigite a idade: ");
	scanf("%d",&idade);
	if (idade <= 16) {
		ingresso = 15.00;
		printf("\n Ingresso para ate 16 anos");
	}else {
		ingresso = 30.00;
		printf("\n Ingresso para maiores de 16 anos");
	}
	printf("\n Valor do ingresso = %.2f", ingresso);
	return 0;
}
