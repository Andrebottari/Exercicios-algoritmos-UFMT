/*5) Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação for maior
que 20% do salário, imprima: “Empréstimo não concedido”. Caso contrário, imprima: “Empréstimo
concedido”. */

#include<stdio.h>

int main(){

float salarioTrabalhador = 0, valorPrestacao = 0;


    printf("Digite o seu salário atual: ");
    scanf("%f",&salarioTrabalhador);
    printf("Digite o valor da prestação: ");
    scanf("%f",&valorPrestacao);

    if(valorPrestacao > salarioTrabalhador * 0.20){
        printf("Empréstimo não concedido");
    }else{
        printf("Empréstimo concedido");
    }

return 0;}
