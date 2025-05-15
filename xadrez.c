#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Recursividade
void movimentoTorre(int movTorre)
{
    if (movTorre > 0)
    {
        printf("(Torre) - Direita\n");
        movimentoTorre(movTorre - 1);
    }
}

// Recursividade
void movimentoBispo(int movBispo)
{
    if (movBispo > 0)
    {
        printf("(Bispo) - Direita\n");
        movimentoBispo(movBispo - 1);
    }
}

// Recursividade
void movimentoRainha(int movRainha)
{
    if (movRainha > 0)
    {
        printf("(Rainha) - Esquerda\n");
        movimentoRainha(movRainha - 1);
    }
}

int main()
{
    // Movimentação das Peças

    int torre = 0, bispo = 0, rainha, cavalo = 1;

    // Implementação de Movimentação do Bispo
    for (bispo = 5; bispo > 0; bispo--)
    {
        printf("(Bispo) - Cima\n");

        for (int i = 1; i > 0; i--)
        {
            movimentoBispo(1);
        }
        printf("\n");
    }
    printf("\n"); // Espaço

    // Implementação de Movimentação da Torre
    movimentoTorre(5);
    printf("\n");

    // Implementação de Movimentação da Rainha
    movimentoRainha(8);

    printf("\n"); // Espaço

    // Movimentação do Cavalo
    while (cavalo--)
    {
        for (int i = 0, j = 5; i < j; i++, j--)
        {
            if (i == 2)
                continue;
            printf("(Cavalo) - Baixo\n");
        }
        printf("(Cavalo) - Esquerda");
    }

    return 0;
}
