#include <stdio.h>
#include <math.h>

// Definição da struct para representar um ponto cartesiano
struct Ponto2D {
    double x;
    double y;
};

// Função que calcula a distância entre dois pontos
double calcularDistancia(struct Ponto2D ponto1, struct Ponto2D ponto2) {
    double dx = ponto2.x - ponto1.x;
    double dy = ponto2.y - ponto1.y;

    return sqrt(dx * dx + dy * dy); // Fórmula da distância entre dois pontos
}

int main() {
    struct Ponto2D ponto1, ponto2;

    printf("Digite as coordenadas do primeiro ponto (x y): ");
    scanf("%lf %lf", &ponto1.x, &ponto1.y);

    printf("Digite as coordenadas do segundo ponto (x y): ");
    scanf("%lf %lf", &ponto2.x, &ponto2.y);

    double distancia = calcularDistancia(ponto1, ponto2);

    printf("A distancia entre os dois pontos eh: %.2lf\n", distancia);

    return 0;
}
