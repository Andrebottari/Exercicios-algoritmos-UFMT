/*
4) Faça um algoritmo que encontre o primeiro múltiplo de 11, 13 ou 17 após um número dado.
*/
#include <stdio.h>

int main() {
    int numero = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for (int i = numero + 1; ; i++) {
        if (i % 11 == 0 || i % 13 == 0 || i % 17 == 0) {
            printf("O primeiro multiplo encontrado é: %d\n", i);
            break;
        }
    }

    return 0;
}
