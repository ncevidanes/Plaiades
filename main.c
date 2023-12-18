#include <stdio.h>
#include "contador.h"

int main() {
    float conjuntoDados[] = {1.0, 2.0, 3.0, 4.0, 5.0,7.0};

    int tamanhoArray = sizeof(conjuntoDados) / sizeof(conjuntoDados[0]);

    printf("O tamanho do array é: %d\n", tamanhoArray);

    printf("Elementos do array:\n");
    for (int i = 0; i < tamanhoArray; i++) {
        printf("%.2f ", conjuntoDados[i]);
    }
    printf("\n");

    return 0;
}