/*8) Faça um programa que mostre ao usuário um menu com 4 opções de operações matemáticas (as básicas
por exemplo). O usuário escolhe uma das opções e o seu programa então pede dois valores numéricos e
realiza a operação, mostrando o resultado e finalizando. */

#include <stdio.h>

int main() {

    int op;
    float a, b;

    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");

    scanf("%d", &op);

    printf("Digite os dois valores: ");
    scanf("%f %f", &a, &b);

    if (op == 1)
        printf("%.2f\n", a + b);
    else if (op == 2)
        printf("%.2f\n", a - b);
    else if (op == 3)
        printf("%.2f\n", a * b);
    else if (op == 4) {
        if (b != 0)
            printf("%.2f\n", a / b);
        else
            printf("Nao e possivel dividir por zero.\n");
    }
    else
        printf("Opcao invalida.\n");

    return 0;
}
