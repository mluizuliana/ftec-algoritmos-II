#include <stdio.h>
int main(void){
	
	int quantidade = 3;
	int vetor_a[quantidade], vetor_b[quantidade], vetor_s[quantidade];
	
	for(int incremento = 0; incremento < quantidade; incremento++){
		printf("Digite o valor da posicao %d do vetor A:", incremento +1);
		scanf("%d",&vetor_a[incremento]);
	}
	
	for(int incremento = 0; incremento < quantidade; incremento++){
		printf("Digite o valor da posicao %d do vetor B:", incremento +1);
		scanf("%d",&vetor_b[incremento]);
	}
	
	for(int incremento = 0; incremento < quantidade; incremento++){
		vetor_s[incremento] = vetor_a [incremento] + vetor_b[incremento];
	}
	
	for(int incremento = 0; incremento < quantidade; incremento++){
		printf("O valor da posicao %d do vetor S e: %d\n", incremento + 1, vetor_s[incremento]);
	}
}
