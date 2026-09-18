/*9) Faça um programa para verificar se um determinado número inteiro é divisı́vel por 3 ou 5, mas não
simultâneamente pelos dois.*/

#include<stdio.h>

int main(){

int num = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0) {
        printf("O numero é divisivel por 3 e por 5.");
    }
    else if (num % 3 == 0) {
        printf("O numero é divisivel por 3, mas não por 5.");
    }
    else if (num % 5 == 0) {
        printf("O numero é divisivel por 5, mas não por 3.");
    }
    else {
        printf("O numero não é divisivel por 3 nem por 5.");
    }

return 0;}
