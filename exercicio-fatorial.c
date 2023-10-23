#include<stdio.h>
int main(void){
	
	int numero, fatorial;
	
	printf("Digite um  numero para o calculo do fatorial: \n");
	scanf("%d",&numero);

	fatorial = 1; 
	if(numero > 0) {
		
		for(int incremento = 1; incremento <= numero; incremento++){
			fatorial = fatorial * incremento;
		}	
		printf("O fatorial de %d e %d", numero,fatorial);
		
	} else {
		printf("Nao e possivel calcular o fatorial de valores menores que 0");
	}
}
