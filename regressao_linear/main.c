#include <stdio.h>
#include "regressao_linear.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <nome_arquivo.csv>\n", argv[0]);
        return 1;
    }

    Ponto *pontos = NULL;
    int n = 0;
    double beta0, beta1;

    lerDados(argv[1], &pontos, &n);
    calcularRegressao(pontos, n, &beta0, &beta1);

    printf("y = %.2fx + %.2f\n", beta1, beta0);

    free(pontos);
    return 0;
}
