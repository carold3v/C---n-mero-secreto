#include <stdio.h>
#define NUMERO_DE_TENTATIVAS 5

int main(){

    printf("******************************************************\n");
    printf("Bem vindo ao jogo do Número Secreto 🤫 \n");
    printf("******************************************************\n");

    int numeroSecreto = 42;

    //printf("o número secreto é o %d, não conta pra ninguém!", numeroSecreto);

    int chute;

    for(int i = 1; i<=NUMERO_DE_TENTATIVAS; i++){
        printf("Tentativas de %d a %d\n", i, NUMERO_DE_TENTATIVAS);
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);
        printf("O seu chute foi %d\n", chute);

        if (chute < 0){
            printf("Você não pode chutar números negativos!\n");
            i--;
            continue;
        }

        int acertou = (chute == numeroSecreto);
        int maior = chute > numeroSecreto;
        int menor = chute < numeroSecreto;
        //printf("Acertou: %d\n", acertou);

        if (acertou){
            printf("Parabéns, você acertou!✅\n");
            printf("Você é um ótimo jogador! 😺\n");
            break;
        } 
        else if (maior){
            ("Seu chute é MAIOR que o número secreto.😿\n");
        }
        else {
            ("Seu chute é MENOR que o número secreto.😿\n");
        }
        /*
            else {
            int maior = chute > numeroSecreto;
                if(maior){
                    printf("O chute foi maior que o número secreto :(\n");
                } else {
                    printf ("O chute foi menor que o número secreto :(\n");
                }   
            }
        */
    }
    printf("Fim de jogo!❌\n");
}