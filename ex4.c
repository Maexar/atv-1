#include <stdio.h>

// Definição da struct para representar uma data
struct Data {
    int dia;
    int mes;
    int ano;
};

// Função que calcula a diferença de dias entre duas datas
int diferencaDias(struct Data data1, struct Data data2) {
    // Considerei cada mês tendo 30 dias para simplificar o cálculo
    int diasData1 = data1.ano * 360 + data1.mes * 30 + data1.dia;
    int diasData2 = data2.ano * 360 + data2.mes * 30 + data2.dia;

    return abs(diasData2 - diasData1); // Valor absoluto da diferença de dias
}

int main() {
    struct Data data1, data2;

    printf("Digite a primeira data (dia mes ano): ");
    scanf("%d %d %d", &data1.dia, &data1.mes, &data1.ano);

    printf("Digite a segunda data (dia mes ano): ");
    scanf("%d %d %d", &data2.dia, &data2.mes, &data2.ano);

    int diferenca = diferencaDias(data1, data2);

    printf("A diferenca de dias entre as duas datas eh: %d\n", diferenca);

    return 0;
}
