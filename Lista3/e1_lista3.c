/*
1) Faça um programa que, dado um número positivo, imprima seus divisores.
*/

#include<stdio.h>

int main(){

int num = 0, resultado = 0;

    printf("Digite um número positivo: ");
    scanf("%d", &num);

    for(int i = 1 ; i <= num; i++){
        if(num % i == 0){
            printf("%d ",i);
        }
    }

return 0;}
