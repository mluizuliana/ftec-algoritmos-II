#include<stdio.h>
int main(void)
{
	int codigo;
	printf("\nDigite o codigo do curso: ");
	scanf("%d",&codigo);
	
	switch(codigo)
	{
		case 1:
			printf("\nAnalise e Desenvolvimento de Sistemas");
			break;
		case 2:
			printf("\nEngenharia da Computação");
			break;
		case 3:
			printf("\nGestão da Tecnologia da Informação");
			break;
		case 4:
			printf("\nRedes de Computadores");
			break;
		case 5:
		printf("\nSegurança da Informação");
		break;
		default: 
		printf("\nCurso inexistente");
	}
	return 0;
}
