

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


// Função recursiva para o movimento da Torre
void moverTorre(int i, int limite) {
    if (i < limite) {
        printf("**Direita**\n");
        moverTorre(i + 1, limite); // Chamada recursiva
    }
}

// Função recursiva para o movimento do Bispo com loops aninhados
void moverBispo(int linha, int coluna, int limiteVertical, int limiteHorizontal) {
    if (linha < limiteVertical && coluna < limiteHorizontal) {
        printf("**Baixo e Esquerda**\n", linha, coluna);
        
        // Loop aninhado para movimentar o Bispo
        for (int i = 0; i < 1; i++) {
            moverBispo(linha + 1, coluna + 1, limiteVertical, limiteHorizontal); // Recursão
        }
    }
}

// Função recursiva para o movimento da Rainha
void moverRainha(int k, int limite) {
    if (k <= limite) {
        printf("**Direita**\n");
        moverRainha(k + 1, limite); // Chamada recursiva
    }
}

// Função para o movimento do Cavalo (com loops aninhados)
void moverCavalo() {
    for (int i = 0; i < 1; i++) { // Movimentos do Cavalo (apenas um movimento aqui)
        for (int j = 0; j < 2; j++) {
            printf("**Cima**\n");
        }
        printf("**Esquerda**\n");
    }
}

int main() {
    // Movimentos da Torre
    printf("Peça TORRE\n");
    moverTorre(0, 5); // Chama a função recursiva para a Torre, com limite de 5 casas

    // Movimentos do Bispo
    printf("\nPeça BISPO\n");
    moverBispo(0, 0, 5, 5); // Chama a função recursiva para o Bispo, com limite de 5 movimentos

    // Movimentos da Rainha
    printf("\nPeça RAINHA\n");
    moverRainha(1, 8); // Chama a função recursiva para a Rainha, com limite de 8 movimentos

    // Movimentos do Cavalo
    printf("\nPeça CAVALO\n");
    moverCavalo(); // Chama a função para o movimento do Cavalo

    return 0;
}




// Nível Novato - Movimentação das Peças
// Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

// Implementação de Movimentação do Bispo
// Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

// Implementação de Movimentação da Torre
// Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

// Implementação de Movimentação da Rainha
// Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

// Nível Aventureiro - Movimentação do Cavalo
// Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
// Um loop pode representar a movimentação horizontal e outro vertical.

// Nível Mestre - Funções Recursivas e Loops Aninhados
// Sugestão: Substitua as movimentações das peças por funções recursivas.
// Exemplo: Crie uma função recursiva para o movimento do Bispo.

// Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
// Inclua o uso de continue e break dentro dos loops.
