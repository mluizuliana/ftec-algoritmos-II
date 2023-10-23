#include <stdio.h>
int main(void)
{
	int dias=0, conta1=0, conta2=0, conta3=0, total;
	float media, total_dias=0;
	char pesquisa = 's';
	
	while(pesquisa =='S' || pesquisa =='s')
	{
		do{
			printf("\nDigite a quantidade de dias: ");
			scanf("%d",&dias);
				if(dias < 0 || dias > 6)
				{
					printf("Quantidade inválida (1 a 6) - redigite!)");
				}
		}while(dias < 0 || dias > 6);
		
		if (dias==0) conta1 = conta1+1;
		else if (dias > 0 && dias <= 3) conta2=2+1;
		else if (dias > 3 && dias <= 6) conta3=3+1;
		
		total_dias = total_dias + dias; 
		fflush(stdin);
		printf("Deseja continuar a pesquisa ? Digite s para sim ");
		pesquisa = getche(); //leitura via teclado e armazena na pesquisa
	} //fim do laco while
	total = conta1+conta2+conta3;
	printf("\n\nRELATORIO DA PESQUISA - CANTINA UNIVERSITARIA\N");
	printf("\n Total de alunos pesquisados: %d", total);
	printf("\n Total de alunos que consomem nenhum dia da semana: %d", conta1);
	printf("\n Total de alunos que consomem de 1 a 3 dias por semana: %d", conta2);
	printf("\n Total de alunos que consomem de 4 a 6 dias por semana: %d", conta3);
	printf("\n Media de dias consumidos pelos alunos durante a semana: %.2f", total_dias/total);
}
