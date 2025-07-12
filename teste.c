#include <stdio.h>

int main(){

    printf("******************************************************\n");
    printf("Bem vindo ao jogo do Número Secreto!!! \n");
    printf("******************************************************\n");

    int numeroSecreto = 42;

    //printf("o número secreto é o %d, não conta pra ninguém!", numeroSecreto);

    int chute;

    printf("Qual é o seu chute? ");
    scanf("%d", &chute);
    printf("O seu chute foi %d\n", chute);

    int acertou = (chute == numeroSecreto);
    //printf("Acertou: %d\n", acertou);

    if (acertou){
        printf("Parabéns, você acertou!\n");
        printf("Você é um ótimo jogador!!! :)\n");
    } 
    /*else {
        printf("Ops... Tente novamente! Não desanime!\n");
    }
    */
    else {
    int maior = chute > numeroSecreto;
        if(maior){
            printf("O chute foi maior que o número secreto :(\n");
        } else {
            printf ("O chute foi menor que o número secreto :(\n");
        }   
    }
}