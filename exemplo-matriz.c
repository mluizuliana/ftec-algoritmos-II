#include <stdio.h>
int main(void){
	
	int matriz [3][3];
	int soma; 
	
	for(int linha= 0; linha < 3; linha++){
		for(int coluna = 0; coluna < 3; coluna++){
			printf("Digite o valor da posicao %dX%d: ", linha + 1, coluna + 1);
			scanf("%d", &matriz[linha][coluna]);
		}
	}	
	
	soma = 0;
	for(int linha= 0; linha < 3; linha++){
		for(int coluna = 0; coluna < 3; coluna++){
		soma = soma + matriz[linha][coluna];
		}
	
	}
	printf("A soma dos elementos da matriz e: %d", soma);
}
