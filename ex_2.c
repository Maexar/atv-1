#include <stdio.h>
#include <stdlib.h>




// Função que verifica se um número é perfeito
int ehPerfeito(int num) {
 
   
    int *divisores = (int *)malloc(sizeof(int) * (num / 2)); // Alocando memória dinamicamente
    int contador = 0;
    int somaDivisores = 0;

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            divisores[contador] = i;
            contador++;
            somaDivisores += i;
        }
    }

    if (somaDivisores == num) {
        free(divisores); // Liberando memória alocada dinamicamente
        return 1; // É um número perfeito
    } else {
        free(divisores); // Liberando memória alocada dinamicamente
        return 0; // Não é um número perfeito
    }
}

int main() {

    
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (ehPerfeito(numero)) {
        printf("%d eh um numero perfeito.\n", numero);
    } else {
        printf("%d nao eh um numero perfeito.\n", numero);
    }

    return 0;
}