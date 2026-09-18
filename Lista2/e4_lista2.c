/*4) Faça um programa que, dada a altura e peso de uma pessoa, calcule seu Índice de Massa Corporal (IMC)
peso
e informe a qual faixa pertence. Fórmula: IMC
2 . Faixas:
• Abaixo de 17: tipo A;
• Entre 17 e 18,49: tipo B;
• Entre 18,5 e 24,99: tipo C;
• Maior que 25: tipo D.*/

#include<stdio.h>

int main(){

float imc = 0,altura = 0, peso = 0;

    printf("Digite sua altura: ");
    scanf("%f",&altura);
    printf("Digite seu peso atual: ");
    scanf("%f",&peso);

    imc = peso /(altura*altura);

     if (imc < 17) {
        printf("TIPO A");
    }
    else if (imc >= 17 && imc <= 18.49) {
        printf("TIPO B");
    }
    else if (imc >= 18.5 && imc <= 24.99) {
        printf("TIPO C");
    }
    else {
        printf("TIPO D");
    }

return 0;}
