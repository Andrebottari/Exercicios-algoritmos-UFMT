/*8) Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do
ano atual. */


#include <stdio.h>

int main() {

int idade = 0, anoAtual = 0, anoNascimento = 0;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    anoNascimento = anoAtual - idade;

    printf("O seu ano de nascimento é: %d", anoNascimento);

    return 0;
}
