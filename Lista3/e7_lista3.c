
/*
6) Escreva um programa que leia um valor n, inteiro e positivo, e calcule o valor de E, conforme a fórmula
a seguir:
            E =1+1+ 1+ 1+ 1
                 1! 2! 3! n!
*/

#include <stdio.h>

int main() {
    float resultado = 1 , fatorial = 1;
    int  numero = 0;

    printf("Digite um valor 'n' inteiro: ");
    scanf("%d", &numero);
    for(int i = 1; i <= numero; i++){
        fatorial = fatorial * i;
        resultado += (1/fatorial);

    }

    printf("%.2f", resultado);



    return 0;
}

