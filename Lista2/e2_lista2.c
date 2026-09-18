/*2) Faça um programa que, dado um determinado ano fornecido pelo usuário, informe se esse ano é bissexto.
Um ano é bissexto se atender a pelo menos uma das seguintes regras:
• É divisı́vel por 400;
• É divisı́vel por 4 e não é divisı́vel por 100.*/

#include<stdio.h>

int main(){


int anoDigitado = 0;

        printf("Digite um ano: ");
        scanf("%d", &anoDigitado);

        if((anoDigitado % 400 == 0) || (anoDigitado % 4 == 0 && anoDigitado % 100 !=0)){
            printf("O ano %d É um ano bissexto!", anoDigitado);
        }else{
        printf("o ano %d NÃO é um ano bissexto", anoDigitado);
        }


return 0;}
