#include <stdio.h>

int main() {
    int gabarito[10];
    int respostas[5][10];
    int i, j;
    float notas[5];
    int count_acima_sete = 0;
    float soma_notas = 0.0;

    // Leitura do gabarito
    printf("Digite as respostas do gabarito (10 valores de 1 a 5):\n");
    for (i = 0; i < 10; i++) {
        do {
            scanf("%d", &gabarito[i]);
        } while (gabarito[i] < 1 || gabarito[i] > 5);
    }

    // Leitura das respostas dos funcionários
    printf("Digite as respostas dos 5 funcionarios (valores de 1 a 5):\n");
    for (i = 0; i < 5; i++) {
        printf("Respostas do Funcionario %d:\n", i + 1);
        for (j = 0; j < 10; j++) {
            do {
                scanf("%d", &respostas[i][j]);
            } while (respostas[i][j] < 1 || respostas[i][j] > 5);
        }
    }

    // Cálculo das notas dos funcionários
    for (i = 0; i < 5; i++) {
        float nota = 0.0;
        for (j = 0; j < 10; j++) {
            if (respostas[i][j] == gabarito[j]) {
                nota += 1.0;
            }
        }
        notas[i] = nota;
        soma_notas += nota;
    }

    // Impressão das notas dos funcionários
    printf("\nRelatorio das notas dos 5 funcionarios:\n");
    for (i = 0; i < 5; i++) {
        printf("Nota do funcionario %d = %.1f\n", i + 1, notas[i]);
        if (notas[i] >= 7.0) {
            count_acima_sete++;
        }
    }

    // Cálculo e impressão da média das notas
    float media = soma_notas / 5.0;
    printf("\nMedia de todas as notas dos 5 Funcionarios: %.1f\n", media);

    // Impressão do total de funcionários com nota >= 7.0
    printf("Total de funcionarios com nota >= 7.0: %d\n", count_acima_sete);

    return 0;
}

