//2) Peça ao usuário para digitar três valores inteiros e imprima o produto deles elevado ao quadrado.

#include<stdio.h>

int main(){

int v1 = 0,v2 = 0,v3 = 0;
    printf("Digite três(3) valores inteiros: ");
    scanf("%d%d%d",&v1,&v2,&v3);

    int resultado = (v1*v2*v3)*(v1*v2*v3);

    printf("O resultado é: %d", resultado);

return 0;}
