#include<stdio.h>
int main(void)
{ 
	int val1=10;
	float val2=2.5;
	char nome[20]="Meigan";
	
	printf("Eu amo C!");

	printf("\n\nEu \namo\nC!");
	
	printf("\n\nEu \t\tamo C!");
	
	printf("\n\nEu \bamo C!");
	
	printf("\n\nEu amo \rC!");
	
	printf("\n\nEu amo C \\");

	printf("\n\nEu amo C %%");

	printf("\n\nValor da variavel 1: %d\n\nValor da variavel 2: %10.2f", val1,val2);
	
	printf("\n\nNome: %s", nome);
	
	return 0 ;

}
