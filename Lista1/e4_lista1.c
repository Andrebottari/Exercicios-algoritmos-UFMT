//4) Faça um programa que leia um número inteiro de três dı́gitos e o imprima em ordem inversa. Por
//exemplo, se o usuário digitar 123, seu programa deve imprimir 321.

#include<stdio.h>

int main(){

int valorDigitado = 0;

    printf("Digite um valor inteiro de cinco digitos: ");
    scanf("%d",&valorDigitado);

    printf("Valor digitado Invertido: %d%d%d",
            valorDigitado % 10,
            valorDigitado / 10  % 10,
            valorDigitado / 100
            );


return 0;}
