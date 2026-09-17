/*15) Escreva um programa para calcular e mostrar a quantidade de litros de combustı́vel gastos em uma
viagem, ao utilizar um automóvel que faz 12,7 km/l. Para efetuar o cálculo, deve-se fornecer o tempo
gasto na viagem (em horas) e a velocidade média durante a mesma (em km/h). Assim pode-se obter
distância percorrida e em seguida calcular quantos litros seriam necessários. Mostre o valor com 3
casas decimais após o ponto.*/


#include <stdio.h>

int main() {

    float consumoVeiculo = 12.7;
    float distancia = 0;
    float velocidadeMedia = 0;
    float tempoGasto = 0;
    float resultado = 0;

    printf("Digite o tempo gasto na viagem em HORAS: ");
    scanf("%f", &tempoGasto);

    printf("Digite a velocidade media em KM/H: ");
    scanf("%f", &velocidadeMedia);

    distancia = velocidadeMedia * tempoGasto;

    resultado = distancia / consumoVeiculo;

    printf("A quantidade de combustivel necessária seria: %.3f litros", resultado);

    return 0;
}
