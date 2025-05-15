#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{
    // Nível Novato - Movimentação das Peças

    int torre = 0, bispo = 0, rainha, cavalo = 1;

    // Implementação de Movimentação do Bispo
    do
    {
        printf("(Bispo) - Cima, Direita\n");

        bispo++;
    } while (bispo < 5);
    printf("\n");

    // Implementação de Movimentação da Torre
    while (torre < 5)
    {
        printf("(Torre) - Direita\n");

        torre++;
    }
    printf("\n");

    // Implementação de Movimentação da Rainha
    for (rainha = 0; rainha < 8; rainha++)
    {
        printf("(Rainha) - Esquerda\n");
    }

    printf("\n");
    
    // Nível Aventureiro - Movimentação do Cavalo
    while(cavalo--){
    for(int i = 0; i < 2; i++){
        printf("(Cavalo) - Baixo\n", "(Cavalo) - Baixo\n");
    }
    printf("(Cavalo) - Esquerda");
}
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
