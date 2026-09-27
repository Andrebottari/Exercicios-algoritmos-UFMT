/*8) Um funcionário recebe um aumento anual. Em 1995 ele foi contratado por R$2.000,00. Em 1996 recebeu
um aumento de 1,5%. A partir de 1997, os aumentos sempre correspondem ao dobro do aumento do ano
anterior. Faça um programa que, dado o ano, informe o valor do salário desse funcionário.*/

#include <stdio.h>

int main() {

    float salario = 2000.0;
    float aumento = 0.015;
    int anoDigitado;

    printf("Digite o ano: ");
    scanf("%d", &anoDigitado);

    for (int ano = 1996; ano <= anoDigitado; ano++) {
        salario = salario + (salario * aumento);
        aumento = aumento * 2;
    }

    printf("Seu salario no ano %d sera: %.2f\n", anoDigitado, salario);

    return 0;
}