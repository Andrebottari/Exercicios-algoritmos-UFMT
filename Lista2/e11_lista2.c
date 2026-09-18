/*11) Calcule as raı́zes da equação de segundo grau. Lembrando que
√
−b + ∓ ∆
x=
2a
(1)
onde ∆ = b2 − 4ac e ax2 + bx + c = 0 representa uma equação de 2o grau. A variável a tem que ser
diferente de zero. Caso seja igual, imprima a mensagem “Não é equação de segundo grau”.
• Se ∆ < 0, não existe raiz real. Imprima a mensagem: “Não existe raiz”.
• Se ∆ = 0, existe uma raiz real. Imprima a mensagem: “Raiz única”.
• Se ∆ > 0, imprima as duas raı́zes reais
 */
#include <stdio.h>

int main() {

    float a, b, c, delta, x1, x2, raiz, chute;

    printf("Digite a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("Nao e equacao de segundo grau\n");
    } else {
        delta = b * b - 4 * a * c;

        if (delta < 0) {
            printf("Nao existe raiz\n");
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("Raiz unica: %f\n", x1);
        } else {
            chute = delta / 2;
            while (chute * chute - delta > 0.0001 || delta - chute * chute > 0.0001) {
                chute = (chute + delta / chute) / 2;
            }
            raiz = chute;

            x1 = (-b + raiz) / (2 * a);
            x2 = (-b - raiz) / (2 * a);
            printf("Raizes: %f e %f\n", x1, x2);
        }
    }

    return 0;
}
