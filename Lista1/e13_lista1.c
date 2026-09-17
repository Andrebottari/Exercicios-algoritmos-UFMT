//13) Leia um número inteiro e imprima a soma de seu sucessor com o antecessor de seu dobro.

#include<stdio.h>

int main(){

int valorDigitado = 0;

    printf("Digite um valor inteiro: ");
    scanf("%d",&valorDigitado);

int antecessorDobrado = (valorDigitado * 2) - 1;
int sucessor = valorDigitado + 1;
int resultado = sucessor + antecessorDobrado;

    printf("%d",resultado);



return 0;}
