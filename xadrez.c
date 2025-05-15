#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{
    // Nível Novato - Movimentação das Peças

    int torre = 0, bispo = 0, rainha;

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

    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
