#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
void moverBispo(int casas_bispo)
{
    if (casas_bispo > 0)
    {
        printf("Bispo: moveu-se na diagonal direita, para cima\n");
        moverBispo(casas_bispo - 1);
    }
}

void moverTorre(int casas_torre)
{
    if (casas_torre > 0)
    {
        printf("Torre: moveu-se para direita\n");
        moverTorre(casas_torre - 1);
    }
}

void moverRainha(int casas_rainha)
{
    if (casas_rainha > 0)
    {
        printf("Rainha: moveu-se para a esquerda\n");
        moverRainha(casas_rainha - 1);
    }
}

int main()
{
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int i_bispo = 5, i_torre = 5, i_rainha = 8, i_cavalo = 0; // declaração da varavel fora, para funcionar para os 3
    int movimentoCompleto = 1;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    moverBispo(i_bispo);
    printf("Bispo terminou de se mover!\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    moverTorre(i_torre);
    printf("torre terminou de se mover!\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    moverRainha(i_rainha);
    printf("Rainha terminou de se mover!\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    while (movimentoCompleto--)
    {
        for (i_cavalo = 0; i_cavalo < 2; i_cavalo++)
        {
            printf("Cavalo: moveu-se para cima\n");
        }
        printf("Cavalo moveu-se para a direita\n");
    }
    printf("Cavalo terminou de se mover!\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
