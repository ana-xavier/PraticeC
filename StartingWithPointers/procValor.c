#include <stdio.h>

int procurar_valor(int *vetor, int tamanho, int valor);

int main() {
    int vetor[] = {5, 7, 2, 9, 4};
    int tamanho = 5;
    int valor_procurado = 9;
    int posicao = procurar_valor(vetor, tamanho, valor_procurado);
    if (posicao == -1) {
        printf("Valor nao encontrado\n");
    } else {
        printf("Valor encontrado na posicao %d\n", posicao);
    }
    return 0;
}

int procurar_valor(int *vetor, int tamanho, int valor) {
    int i;
    for (i = 0; i < tamanho; i++) {
        if (*vetor == valor) {
            return i;
        }
        vetor++;
    }
    return -1;
}