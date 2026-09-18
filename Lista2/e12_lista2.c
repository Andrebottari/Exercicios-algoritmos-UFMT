/*
12) Escreva um programa que leia um número inteiro maior do que zero e devolva, na tela, a soma de todos
os seus algarismos. Por exemplo, ao número 251 corresponderá o valor 8 (2 + 5 + 1). Se o número lido
não for maior do que zero ou igual, o programa terminará com a mensagem “Numero invalido”.
*/

#include<stdio.h>

int main(){

int numDigitado = 0, digito = 0, soma = 0;

        printf("Digite um numero inteiro e maior que zero: ");
        scanf("%d",&numDigitado);

    if(numDigitado <= 0){
        printf("Numero invalido");
        return 0;
    }

       while(numDigitado > 0){
        digito = numDigitado % 10;
        soma = soma + digito;
        numDigitado = numDigitado / 10;

    printf("%d",soma);

return 0;}
