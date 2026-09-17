/*Escreva um programa que, leia três notas inteiras, respectivamente dos alunos Aline, Pedro e Sergio,e produza a seguinte saı́da na tela:
   | Aluno |Nota|
   |Aline  |7   |
   |Pedro  |5   |
   |Sergio |8   |

*/

#include <stdio.h>

int main() {

    int n1 = 0, n2 = 0, n3 = 0;

    printf("Digite, respectivamente, a nota de Aline, Pedro e Sergio: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    printf("| Aluno  | Nota  |\n");
    printf("| Aline  | %d    |\n", n1);
    printf("| Pedro  | %d    |\n", n2);
    printf("| Sergio | %d    |\n", n3);

    return 0;}

