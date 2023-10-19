#include <stdio.h>

int main(void) {
    int a = 0, b = 0; // Declara��o e inicializa��o das vari�veis a e b para contar pares e �mpares.
    int n; // Declara��o da vari�vel n para armazenar o n�mero inserido pelo usu�rio.

    printf("%Digite o valor:\n"); // Exibe uma mensagem para o usu�rio indicando que ele deve digitar um valor.
    scanf("%d", &n); // L� o valor inserido pelo usu�rio e armazena em n.

    while (n > 0) { // In�cio de um loop que continua enquanto n for maior que zero.
        if ((n % 2) == 0) { // Verifica se n � par (o resto da divis�o por 2 � zero).
            a = a + 1; // Incrementa o contador de n�meros pares.
        } else { // Se n n�o for par (ou seja, �mpar).
            b = b + 1; // Incrementa o contador de n�meros �mpares.
        }
        printf("Valor atual de n = %d\n", n); // Exibe o valor atual de n.
        n = n / 2; // Divide o valor de n por 2, reduzindo-o pela metade.
    }

    printf("Valor de A = %d Valor de B = %d\n", a, b); // Exibe o total de n�meros pares (a) e �mpares (b).
    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso.
}
