/*6) Faça um programa que receba a altura e o sexo de uma pessoa, calcule e mostre o seu peso ideal, utilizando
as seguintes fórmulas, onde h corresponde à altura:
• Homens: (72, 7 × h) − 58
• Mulheres: (62, 1 × h) − 44, 7 */

#include <stdio.h>

int main() {

    float altura = 0, resultado = 0;
    int sexo = 0;
    //altura deve ser colocada com 1.7 (se for 170cm == 1.7cm)
    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    printf("Digite o numero correspondente ao seu sexo\n");
    printf("[1] Feminino\n");
    printf("[2] Masculino\n");
    scanf("%d", &sexo);

    if (sexo == 1) {
        resultado = (62.1 * altura) - 44.7;
        printf("Seu peso ideal seria: %.2f kg", resultado);
    }
    else if (sexo == 2) {
        resultado = (72.7 * altura) - 58;
        printf("Seu peso ideal seria: %.2f kg", resultado);
    }
    else {
        printf("Opcao de sexo invalida.");
    }

    return 0;
}
