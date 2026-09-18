/*
14)Leia uma data de nascimento através de três números inteiros: dia, mês e ano. Teste a validade desta
data para saber se é uma data válida. O dia deve ser entre 1 e 28 para o mês de fevereiro, e entre 1 e 29
caso o ano seja bissexto. Nos meses de abril, junho, setembro e novembro o dia deve ser entre 1 e 30. Nos
demais meses, o dia deve ser entre 1 e 31. O mes deve ser entre 1 e 12. O ano deve ser menor ou igual
que o ano (use uma constante definida com o valor 2016). O programa deve imprimir “Data invalida” ou
“Data valida” no final da execução do programa.
*/

#include <stdio.h>

int main() {

    int dia = 0, mes = 0, ano = 0;
    int anoFixo = 2016;
    int diasMaximos = 0;

    printf("Digite o dia: ");
    scanf("%d", &dia);

    printf("Digite o mes: ");
    scanf("%d", &mes);

    printf("Digite o ano: ");
    scanf("%d", &ano);

    if (ano > anoFixo || mes < 1 || mes > 12 || dia < 1) {
        printf("Data invalida");
        return 0;
    }

    if (mes == 2) {

        if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
            diasMaximos = 29;
        } else {
            diasMaximos = 28;
        }

    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        diasMaximos = 30;
    } else {
        diasMaximos = 31;
    }

    if (dia <= diasMaximos) {
        printf("Data valida");
    } else {
        printf("Data invalida");
    }

    return 0;
}
