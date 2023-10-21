#include<stdio.h>
//Gere como saído do programa: 
// - O total da produção diária e a sua média
// - Qual a produção média de chocolates em 20 dias

int main(void){


	int qtd, total=0, conta;
	float media;
	for (conta=1;conta<=5;conta++){
		printf("\nDigite a quantidade de producao do dia: ");
		scanf("%d",&qtd);
		total = total + qtd;
		}
		
		printf("\n Total de producao diaria: %d", total);	
		media = (float)total / (conta - 1);
		printf("\n Media diaria = %.2f", media);
		printf("\n Producao em 20 dias = %.2f", media * 20);

	return 0;	
}
	
