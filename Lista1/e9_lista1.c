/*9) Faça um programa que leia as dimensões de um terreno (comprimento e largura), bem como o preço
do metro de tela. Imprima o custo para cercar este terreno com tela. Considere que o preço do metro
de tela é sempre um valor inteiro. */

#include<stdio.h>

int main(){

int comprimento = 0, largura = 0, custoCercar = 0, valorMetragemTela = 0;

    printf("Digite a largura do terreno: ");
    scanf("%d",&largura);
    printf("Digite o comprimento do terreno: ");
    scanf("%d",&comprimento);
    printf("Digite o valor do metro de tela: ");
    scanf("%d", &valorMetragemTela);

    int tamanhoTerreno = 2 * (largura + comprimento);

    custoCercar  = tamanhoTerreno * valorMetragemTela;

    printf("O valor total para cercar o terreno será:$%d", custoCercar);

return 0;}
