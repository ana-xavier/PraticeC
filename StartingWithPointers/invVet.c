#include <stdio.h>

void inverte_vetor(int *vetor, int tamanho);

int main() {
    int vetor[] = {1, 2, 3, 4, 5};
    int tamanho = 5;
    
    inverte_vetor(vetor, tamanho);
    
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    
    return 0;
}

void inverte_vetor(int *vetor, int tamanho) {
    int *inicio = vetor;
    int *fim = vetor + tamanho - 1;
    
    while (inicio < fim) {
        int aux = *inicio;
        *inicio = *fim;
        *fim = aux;
        
        inicio++;
        fim--;
    }
}