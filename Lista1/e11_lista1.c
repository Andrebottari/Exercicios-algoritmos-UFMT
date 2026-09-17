
//11) Faça a leitura de três valores e apresente como resultado o quadrado da soma dos três valores lidos

#include<stdio.h>

int main(){

int resultado = 0, v1 = 0,v2 = 0, v3 = 0;

    printf("Digite o valor 1: ");
    scanf("%d",&v1);
    printf("Digite o valor 2: ");
    scanf("%d",&v2);
    printf("Digite o valor 3: ");
    scanf("%d", &v3);

    resultado = (v1+v2+v3)*(v1+v2+v3);


    printf("O Resultado é: %d",resultado);

return 0;}
