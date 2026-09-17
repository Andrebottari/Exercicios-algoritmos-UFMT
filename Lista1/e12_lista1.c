//12) Leia um número inteiro e imprima o seu antecessor e seu sucessor.

#include<stdio.h>

int main(){

int valorDigitado = 0;

    printf("Digite um valor inteiro");
    scanf("%d",&valorDigitado);

    printf("%d %d %d",valorDigitado-1,valorDigitado,valorDigitado+1);

return 0;}
