
#include <stdio.h>
#include <stdlib.h>

int main() {
    float *num1, *num2; 
    float soma;

    num1 = (float *)malloc(sizeof(float));
    num2 = (float *)malloc(sizeof(float));
    
    printf("Digite o primeiro numero: ");
    scanf("%f", num1);

    printf("Digite o segundo numero: ");
    scanf("%f", num2);
    
    soma = *num1 + *num2;

    printf("A soma dos numeros eh: %.2f\n", soma);

    return 0;
}
