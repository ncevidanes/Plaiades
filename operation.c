//
// Created by Nelson Assis on 15/12/23.
//
float calcMedia(float dados[]) {
    float soma = 0;
    float tamanho = sizeof(float);

    for (int i = 0; i < tamanho; ++i) {
        soma += dados[i];
    }
    return soma / tamanho;
}