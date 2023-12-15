#include <stdio.h>
#include "operation.h"

int main() {
    int tamanho = sizeof(float);
    float conjuntoDados[tamanho];
    printf("Digite os elementos do conjunto de dados:\n");
    for (int i = 0; i < tamanho; ++i) {

        if (scanf("%f", &conjuntoDados[i]) != 1) {
            printf("Entrada inválida.\n");
            return 1;
        }
    }
    printf("Resultado: %.2f\n", calcMedia(conjuntoDados));
}
