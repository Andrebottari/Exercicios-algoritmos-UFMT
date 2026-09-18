//1) Escreva um programa que receba três números do usuário e imprima-os em ordem crescente.

#include <stdio.h>

int main() {

    int n1 = 0, n2 = 0, n3 = 0;

    printf("Digite o primeiro, segundo e terceiro numero: ");
    scanf("%d%d%d", &n1, &n2, &n3);

    if (n1 >= n2 && n1 >= n3) {

        if (n2 >= n3) {
            printf("%d %d %d", n3, n2, n1);
        } else {
            printf("%d %d %d", n2, n3, n1);
        }

    } else if (n2 >= n1 && n2 >= n3) {

        if (n1 >= n3) {
            printf("%d %d %d", n3, n1, n2);
        } else {
            printf("%d %d %d", n1, n3, n2);
        }

    } else {

        if (n1 >= n2) {
            printf("%d %d %d", n2, n1, n3);
        } else {
            printf("%d %d %d", n1, n2, n3);
        }
    }

    return 0;
}
