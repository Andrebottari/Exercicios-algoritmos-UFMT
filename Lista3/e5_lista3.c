/*
5) Na matemática, o número harmônico, designado por H(n), define-se como sendo a soma da série harmônica:
H(n) = 1 +1 + 1 +1+ + + ... + 1.
          2   3  4            n
Faça um programa que leia um valor n inteiro e positivo e apresente o valor de H(n)
*/

#include <stdio.h>

int main() {
    float harmonica = 0;
    int i = 0, numero = 0;

    printf("Digite o valor de 'n' em H(n): ");
    scanf("%d", &numero);

    for(i = 1; i <= numero; i++){
        harmonica += (float)1/i;
       // printf("\nOperação %d.:Resultado:%.2f",i-1,harmonica); para debug
    }

    printf("O resultado de H(%d): %.2f",numero,harmonica);


    return 0;
}

