#include<stdio.h>
//1) Faça um programa que leia um número inteiro e imprima seu valor elevado ao cubo.

int calcularCubo(int valorDigitado){
    return valorDigitado*valorDigitado*valorDigitado;
    }

int main(){
int valorDigitado = 0;
    printf("Digite um valor inteiro: ");
    scanf("%d",&valorDigitado);

    int resultado = calcularCubo(valorDigitado);

    printf("O valor '%d' elevado ao cubo é: %d",valorDigitado,resultado);
return 0;}

