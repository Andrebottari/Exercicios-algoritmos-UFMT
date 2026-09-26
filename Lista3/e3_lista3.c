/*
3) Escreva um algoritmo que converta uma velocidade expressa em km/h para m/s e vice-versa. Você deve
criar um menu com as duas opções de conversão e com uma opção para finalizar o programa. O usuário
poderá fazer quantas conversões desejar, sendo que o programa só será finalizado quando a opção de
finalizar for escolhida.
*/


#include <stdio.h>

int main() {

    int opcao = 0;
    float velocidade = 0, resultado = 0;

    do {
        printf("\nEscolha a opcao desejada:\n");
        printf("[1] Km/h --> m/s\n");
        printf("[2] m/s --> Km/h\n");
        printf("[3] Sair\n");
        printf("R: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Digite a velocidade em Km/h:\nR: ");
            scanf("%f", &velocidade);

            resultado = velocidade / 3.6;

            printf("%.2f m/s\n", resultado);
        }
        else if (opcao == 2) {
            printf("Digite a velocidade em m/s:\nR: ");
            scanf("%f", &velocidade);

            resultado = velocidade * 3.6;

            printf("%.2f Km/h\n", resultado);
        }
        else if (opcao != 3) {
            printf("Opcao invalida!\n");
        }

    } while (opcao != 3);

    return 0;
}
