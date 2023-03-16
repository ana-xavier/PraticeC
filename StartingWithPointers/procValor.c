#include <stdio.h>

int procurar_valor(int *vetor, int tamanho, int valor);

#define TAMVET 20   //define constante

int main() {
    int vetor[] = {5, 7, 2, 9, 4};
    
    int valor;
    printf("Informe o valor a ser procurado: ");
    scanf("%d", &valor);
    
    int pos = procurar_valor(vetor, TAMVET, valor);
    
    if(pos == -1)
        printf("Valor %d não foi encontrado na lista\n", valor);
    else
        printf("O valor %d está na posição %d do vetor\n", valor, pos);
}

int procurar_valor(int *vetor, int tamanho, int valor) {
    printf("Valor buscado: %d\n", valor);
    printf("Endereço do vetor: %p\n", vetor);
    printf("Tamanho do vetor: %d\n", tamanho);         //tamanho de um inteiro (4 bytes)
    
    for (int i = 0; i < tamanho; i++) {
        if (*vetor == valor)           //o que há naquele endereço? é igual ao valor buscado?
            return i;
        vetor++;                       //vetor++ vai para o próximo endereço.
    }    
    return -1;
}
