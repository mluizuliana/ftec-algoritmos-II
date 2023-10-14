#include<stdio.h> 
#include<locale.h> // colocar em português
int main(void){

	char sexo;
	char nome[30];
	float nota1,nota2;
	
	setlocale(LC_ALL,"portuguese"); // ou setlocale(0, "portuguese")
	
	printf("\nNome do aluno: ");
	fflush(stdin);
	gets(nome);
	
	printf("\nSexo (F/M): ");
	fflush(stdin);
	sexo=getchar();
	
	printf("\nInforme a nota 1: ");
	scanf("%f", &nota1); // digitar com vírgula, e não ponto 
	printf("\nInforme a nota 2: ");
	scanf("%f",&nota2);
	
	printf("\n%s é do sexo %c possui média = %.2f", nome, sexo,(nota1+nota2)/2);
	
	return 0;

}
