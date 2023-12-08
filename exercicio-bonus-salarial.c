#include <stdio.h>
#include <ctype.h>

//A biblioteca ctype.h em C fornece funções para testar e manipular caracteres. Ela contém funções como isalpha, isdigit, toupper, tolower, entre outras, que são usadas para verificar ou transformar caracteres.

//%c é um especificador de formato usado em funções de entrada e saída, como printf e scanf, para lidar com caracteres. Quando usado com scanf, por exemplo, %c é usado para ler um único caractere da entrada do usuário.

main(void){
	int x, categoria;
	float bonus, salario;
	char clas;
	for(x = 1 ; x <= 20 ; x++){
		printf("\nDigite o salário: ");
		scanf("%f",&salario);
		printf("\nDigite a classificação: ");
		fflush(stdin);
		scanf("%c",&clas);
		
// <substituir aqui pelas alternativas apresentadas para o programa>
		
		printf("\nClassificação = %c", clas);
		printf("\nSalario = %.2f", salario);
		printf("\nBonus = %.2f", bonus)
		printf("\nSalario final = %.2f", bonus + salario);

	}
}

// Alternativa I

switch(clas)
{
	case'a':
	case'A':
		bonus = salario * 0.1;
		break;
	case'b':
	case'B':
		bonus = salario * 0,2;
		break;
	case'c':
	case'C':
		bonus = salario * 0.3;
		break;
	default:
		bonus = 0;
}

// Alternativa II

switch(toupper(clas))
{
	case'A':
		bonus = salario * 0.1;
		break;
	case'B':
		bonus = salario * 0.2;
		break;
	case'C':
		bonus = salario * 0.3;
		break;
	default:
		bonus = 0;
}

// Alternativa III

clas = toupper(clas);
if(clas == 'A')
{
	bonus = salario * 0.1;
} 
else 
{
	if(clas == 'B') 
	{
		bonus = salario * 0.2;
	}
	else
	{
		if(clas == 'C')
		{
			bonus - salario * 0.3;
		}
		else
		{
			bonus = 0;
		}
	}
}

// Todas as alternativas acima estão corretas
