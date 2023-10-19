#include <stdio.h>

int main(void) {
    int a = 0, b = 0; // Declaração e inicialização das variáveis a e b para contar pares e ímpares.
    int n; // Declaração da variável n para armazenar o número inserido pelo usuário.

    printf("%Digite o valor:\n"); // Exibe uma mensagem para o usuário indicando que ele deve digitar um valor.
    scanf("%d", &n); // Lê o valor inserido pelo usuário e armazena em n.

    while (n > 0) { // Início de um loop que continua enquanto n for maior que zero.
        if ((n % 2) == 0) { // Verifica se n é par (o resto da divisão por 2 é zero).
            a = a + 1; // Incrementa o contador de números pares.
        } else { // Se n não for par (ou seja, ímpar).
            b = b + 1; // Incrementa o contador de números ímpares.
        }
        printf("Valor atual de n = %d\n", n); // Exibe o valor atual de n.
        n = n / 2; // Divide o valor de n por 2, reduzindo-o pela metade.
    }

    printf("Valor de A = %d Valor de B = %d\n", a, b); // Exibe o total de números pares (a) e ímpares (b).
    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso.
}
