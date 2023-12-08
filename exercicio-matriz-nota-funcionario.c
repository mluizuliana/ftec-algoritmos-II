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

    // Leitura das respostas dos funcion�rios
    printf("Digite as respostas dos 5 funcionarios (valores de 1 a 5):\n");
    for (i = 0; i < 5; i++) {
        printf("Respostas do Funcionario %d:\n", i + 1);
        for (j = 0; j < 10; j++) {
            do {
                scanf("%d", &respostas[i][j]);
            } while (respostas[i][j] < 1 || respostas[i][j] > 5);
        }
    }

    // C�lculo das notas dos funcion�rios
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

    // Impress�o das notas dos funcion�rios
    printf("\nRelatorio das notas dos 5 funcionarios:\n");
    for (i = 0; i < 5; i++) {
        printf("Nota do funcionario %d = %.1f\n", i + 1, notas[i]);
        if (notas[i] >= 7.0) {
            count_acima_sete++;
        }
    }

    // C�lculo e impress�o da m�dia das notas
    float media = soma_notas / 5.0;
    printf("\nMedia de todas as notas dos 5 Funcionarios: %.1f\n", media);

    // Impress�o do total de funcion�rios com nota >= 7.0
    printf("Total de funcionarios com nota >= 7.0: %d\n", count_acima_sete);

    return 0;
}

