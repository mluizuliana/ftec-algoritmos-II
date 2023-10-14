#include<stdio.h>
int main(void)
{ 
	int val1=10;
	float val2=2.5;
	char nome[20]="Meigan";
	
	printf("Eu amo C!");

	/* nova linha */ 
	
	printf("\n\nEu \namo\nC!");

	/* tabulacao */
	
	printf("\n\nEu \t\tamo C!");

	/* backspace volta um espaço */ 
	
	printf("\n\nEu \bamo C!");

	/* retorno - retorno de carro, ao inicio da linha */ 
	
	printf("\n\nEu amo \rC!");

	/* imprime \ */ 
	
	printf("\n\nEu amo C \\");

	/* imprime % */ 

	printf("\n\nEu amo C %%");

	/* d ou %i = inteiro & %f = float */ 

	printf("\n\nValor da variavel 1: %d\n\nValor da variavel 2: %10.2f", val1,val2);

	/* string/cadeira de caracteres */ 
	
	printf("\n\nNome: %s", nome);
	
	return 0 ;

}
