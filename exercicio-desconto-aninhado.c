#include <stdio.h>

int main(void) {
    float valor, desconto;
    int qtd;
    printf("\nDigite o valor total da compra: ");
    scanf("%f", &valor);
    printf("\nDigite a quantidade de produtos: ");
    scanf("%d", &qtd);

    if (qtd <= 10) {
        desconto = valor * (0.20); // 20% de desconto
    } else if (qtd <= 20) {
        desconto = valor * (0.30); // 30% de desconto
    } else {
        desconto = valor * (0.40); // 40% de desconto
    }
    printf("Valor da compra com desconto = %.2f", (valor - desconto));
    return 0;
}

