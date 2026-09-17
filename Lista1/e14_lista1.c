/*14) Escreva um programa que receba como entrada o raio de um cı́rculo e imprima seu diâmetro, o
comprimento de sua circunferência e sua área. Use o valor constante de 3, 14159 para “pi”.*/

#include <stdio.h>

int main() {

    float pi = 3.14159;
    float valorDigitado = 0;
    float diametro = 0;
    float comprimento = 0;
    float area = 0;

    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &valorDigitado);

    diametro = 2 * valorDigitado;
    comprimento = 2 * pi * valorDigitado;
    area = pi * (valorDigitado * valorDigitado);

    printf("Raio: %.2f\n", valorDigitado);
    printf("Diametro: %.2f\n", diametro);
    printf("Comprimento: %.2f\n", comprimento);
    printf("Area: %.2f\n", area);

    return 0;
}
