#include <stdio.h>

void copiar_vetor(int *destino, int *origem, int tamanho);

int main() {
    int v1[5] = {1, 2, 3, 4, 5};
    int v2[5];
    int tamanho = 5;
    copiar_vetor(v2, v1, tamanho);
    int i;
    for(i=0; i<tamanho; i++) {
        printf("%d ", *(v2+i));
    }
    return 0;
}

void copiar_vetor(int *destino, int *origem, int tamanho) {
    int i;
    for(i=0; i<tamanho; i++) {
        *(destino+i) = *(origem+i);
    }
}
