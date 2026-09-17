/* 7) Faça um programa que leia o horário (hora, minuto e segundo) de inı́cio e a duração, em segundos, de
uma experiência biológica. O programa deve informar o horário (hora, minuto e segundo) do término
da experiência.
*/

#include<stdio.h>

int main(){

int resultado = 0, hora = 0, minuto = 0, segundo = 0;
int duracaoExperiencia = 0, convert = 0;

    printf("Digite a hora, minutos e segundos do INICIO da experiência: ");
    scanf("%d%d%d",&hora,&minuto,&segundo);

        convert = hora * 3600;
        convert = convert + (minuto * 60);
        convert = convert + segundo;

    printf("Digite quanto tempo durará a experiência em SEGUNDOS(s): ");
    scanf("%d",&duracaoExperiencia);

        resultado = convert + duracaoExperiencia;
        hora      = resultado / 3600;
        minuto    = (resultado % 3600) / 60;
        segundo   = resultado % 60;


    printf("O tempo encerrá em: %d H:%dmin:%dseg",hora, minuto,segundo );





return 0;}
