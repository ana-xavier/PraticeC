#include <stdio.h>

void bubbleSort(int *vetor, int tamanho);

int main() {
    int vetor[] = {5, 8, 1, 3, 9};
    int tamanho = sizeof(vetor) / sizeof(int);

    bubbleSort(vetor, tamanho);

    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}

void bubbleSort(int *vetor, int tamanho) {
    int i, j;
    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (*(vetor + j) > *(vetor + j + 1)) {
                int temp = *(vetor + j);
                *(vetor + j) = *(vetor + j + 1);
                *(vetor + j + 1) = temp;
            }
        }
    }
}