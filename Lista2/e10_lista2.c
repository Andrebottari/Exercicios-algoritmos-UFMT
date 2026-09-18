/*10) Leia a idade, o sexo e o tempo de serviço de um trabalhador e informe se ele pode ou não se aposentar.
Para se aposentar, o trabalhador deve atender a pelo menos um dos requisitos listados a seguir.
• Homens
– Ter pelo menos 65 anos.
– Ter no mı́nimo 35 anos de contribuição.
– A soma da idade com o tempo de contribuição for igual a 95.
• Mulheres
– Ter pelo menos 60 anos.
– Ter no mı́nimo 30 anos de contribuição.
– A soma da idade com o tempo de contribuição for igual a 85.
*/
#include<stdio.h>

int main(){

    int idade = 0, sexo = 0, tempoServico = 0;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu sexo [1]Feminino [2]Masculino: ");
    scanf("%d", &sexo);
    printf("Digite seu tempo de servico em anos: ");
    scanf("%d", &tempoServico);

    if((sexo == 1 && (idade >= 60 || tempoServico >= 30 || (tempoServico + idade) == 85)) ||
       (sexo == 2 && (idade >= 65 || tempoServico >= 35 || (tempoServico + idade) == 95))){
        printf("Voce esta apto(a) para se aposentar.\n");
    }else{
        printf("Infelizmente, voce NAO esta apto(a) para se aposentar.\n");
    }

    return 0;
}
