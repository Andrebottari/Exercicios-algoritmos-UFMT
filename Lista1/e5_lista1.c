//5) Lei um número inteiro de 4 dı́gitos e imprima um dı́gito por linha

#include<stdio.h>

int main(){

int valorDigitado = 0;

    printf("Digite um valor inteiro de quatro(4) digitos: ");
    scanf("%d",&valorDigitado);

    printf("%d \n%d \n%d \n%d", //1234
            valorDigitado / 1000,
            valorDigitado / 100 % 10,
            valorDigitado / 10 % 10,
            valorDigitado % 10
            );

return 0;}
