#include<stdio.h>
int main(void) {

	char nome[30];
	int cod_mat;
	float sal_1, sal_2, sal_3, soma, media;
		
	printf("Nome do aluno: ");
	fflush(stdin);
	gets(nome);
	
	printf("Codigo: ");
	fflush(stdin);
	scanf("%d",&cod_mat);
	
	printf("Salario 1: ");
	scanf("%f",&sal_1);
	
	printf("Salario 2: ");
	scanf("%f",&sal_2);
	
	printf("Salario 3: ");
	scanf("%f",&sal_3);
	
	printf("=======================================================");
	printf("\nNome  :%30s",nome);
	printf("\nCodigo:%30d",cod_mat);
	printf("\n\tSalario 1:\t %10.1f",sal_1);
	printf("\n\tSalario 2:\t %10.1f",sal_2);
	printf("\n\tSalario 3:\t %10.1f",sal_3);
	
	soma=sal_1+sal_2+sal_3;
	media=soma/3;
	
	printf("\n\n%.1f + %.1f + %.1f = %.1f", sal_1,sal_2,sal_3,soma);
	printf("\nMedia do funcionario = %.1f", media);
	printf("\n=======================================================");

	
	return 0;
}
