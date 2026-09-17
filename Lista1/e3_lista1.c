//3)Faça um programa que leia um número inteiro de cinco dı́gitos e imprima cada um de seus dı́gitos
//separados por um hı́fen. Por exemplo, se o usuário digitar 12345, seu programa deve imprimir 1-2-3-
//4-5.

#include<stdio.h>

int main(){

int valorDigitado = 0;

    printf("Digite um valor inteiro de cinco digitos: ");
    scanf("%d",&valorDigitado);

    printf("%d-%d-%d-%d-%d",
           valorDigitado / 10000,
           valorDigitado / 1000 % 10,
           valorDigitado / 100 % 10,
           valorDigitado / 10 % 10,
           valorDigitado % 10);

return 0;}
