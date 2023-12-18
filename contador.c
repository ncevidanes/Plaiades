//
// Created by Nelson Assis on 18/12/23.
//
int counter(float dados[]) {
    int tamanho = 0;
    while (dados[tamanho] != '\0') {
        tamanho++;
    }
    return tamanho;
}
