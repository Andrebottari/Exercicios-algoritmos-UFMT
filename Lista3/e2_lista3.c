/*
2) Faça um programa que some todos os números naturais abaixo de 1000 que são múltiplos de 3 ou 5.
*/

#include<stdio.h>

int main(){

int  resultado = 0;

    for (int i = 0; i < 1000; i++
    ){
        if(i % 3 == 0 || i % 5 == 0){
            resultado += i;
        }
    }

    printf("%d", resultado);

return 0;}
