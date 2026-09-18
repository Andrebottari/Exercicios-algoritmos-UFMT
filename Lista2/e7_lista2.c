/*7) Faça um programa que calcule a média ponderada das notas de 3 provas. A primeira e a segunda prova
têm peso 1 e a terceira tem peso 2. Ao final, mostrar a média do aluno e indicar se o aluno foi aprovado
ou reprovado. A nota para aprovação deve ser igual ou superior a 5 pontos. */

#include<stdio.h>

int main(){

float n1 = 0 , n2 = 0, n3 = 0, nFinal = 0;

    printf("Digite sua primeira nota: ");
    scanf("%f", &n1);
    printf("Digite sua segunda nota: ");
    scanf("%f", &n2);
    printf("Digite sua terceira nota: ");
    scanf("%f", &n3);

    nFinal = (n1 + n2 + n3 * 2) / 4;

    if(nFinal >= 5){
        printf("Nota Final: %.2f \nPARABENS! VOCÊ ESTÁ APROVADO. ",nFinal);
    }
    else{
        printf("Nota Final: %.2f \nREPROVADO! Estude mais na próxima vez.",nFinal);
    }

    return 0;
}
