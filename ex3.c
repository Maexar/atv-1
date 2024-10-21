#include <stdio.h>
#include <stdlib.h>

// Função que encontra o maior número entre os N números inteiros
int encontrarMaior(int *numeros, int n) {
    int maior = *numeros; // Inicializa o maior com o primeiro elemento

    for (int i = 1; i < n; i++) {
        if (*(numeros + i) > maior) {
            maior = *(numeros + i);
        }
    }

    return maior;
}

int main() {
    int n;

    printf("Digite o numero de elementos: ");
    scanf("%d", &n);

    int *numeros = (int *)malloc(sizeof(int) * n); // Alocando memória para N números inteiros

    printf("Digite os %d numeros inteiros:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", numeros + i); // Usando aritmética de ponteiros para preencher o vetor dinâmico
    }

    int maiorNumero = encontrarMaior(numeros, n); // Chamando a função para encontrar o maior número
    printf("O maior numero eh: %d\n", maiorNumero);

    free(numeros); // Liberando a memória alocada dinamicamente

    return 0;
}