/*3) Faça um programa que receba do usuário três lados de um triângulo. O programa deverá informar se
os valores podem formar um triângulo. Indique, caso os lados formem um triângulo, se o mesmo é:
equilátero, isósceles ou escaleno. Dicas:
• Três lados formam um triângulo quando a soma de quaisquer dois lados for maior que o terceiro;
• Triângulo Equilátero: três lados iguais;
• Triângulo Isósceles: quaisquer dois lados iguais;
• Triângulo Escaleno: três lados diferentes.*/

#include<stdio.h>

int main(){

float ladoA = 0,ladoB = 0,ladoC = 0;

    printf("Digite os valores dos lados - A,B e C, respectivamente: ");
    scanf("%f%f%f",&ladoA,&ladoB,&ladoC);

    if (ladoA + ladoB > ladoC &&
        ladoA + ladoC > ladoB &&
        ladoB + ladoC > ladoA){

        if(ladoA == ladoB && ladoB == ladoC){
            printf("Triângulo Equilátero: três lados iguais");
        }
        else if(ladoA == ladoB || ladoB == ladoC || ladoA == ladoC){
            printf("Triângulo Isósceles: quaisquer dois lados iguais");
        }
        else {
            printf("Triângulo Escaleno: Triângulo Escaleno: três lados diferentes.");
        }
        }else{
            printf("NÃO É UM TRIANGULO");
        }

return 0;}
