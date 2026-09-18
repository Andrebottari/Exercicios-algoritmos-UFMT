/*
13) Leia a distância em km e a quantidade de litros de gasolina consumidos por um carro em um percurso,
calcule o consumo km/l e escreva uma mensagem de acordo com a tabela abaixo.
Consumo(km/L) |  Mensagem
menor que 8   | Venda o carro!
entre 8 e 14  | Econômico.
maior que 14  | Super Econômico!
*/
#include<stdio.h>
int main(){

float distancia = 0, quantLitro = 0, consumoTotal = 0;

        printf("Digite a distância: ");
        scanf("%f",&distancia);

        printf("Digite a quantidade de litros: ");
        scanf("%f",&quantLitro);

        consumoTotal = distancia / quantLitro;

        if(consumoTotal < 8){
            printf("Venda o carro!");
        }else if(consumoTotal < 14 ){
            printf("Econômico.");
        }else {
            printf("Super econômico!");
        }

return 0;}
