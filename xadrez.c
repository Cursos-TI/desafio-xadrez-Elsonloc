

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{

  printf("Peça TORRE\n");
  for (int i = 0; i < 5; i++) // Move a Torre 5 casas para a direita
  {
    printf("**Direita**\n"); // Imprime a direçao do movimento.
  }

  printf("\nPeça BISPO\n");
  int j = 0;
  do
  {
    printf("**Cima e Direita**\n");
    j++;
  } while (j < 5);

  printf("\nPeça RAINHA\n");

  int k = 1;

  while (k <= 8)
  {
    printf("**Esquerda**\n", k);
    k++;
  }

  printf("\nPeça CAVALO\n");
  int cavalo = 1;
  while (cavalo--)
  {
    for (int cavalo1 = 0; cavalo1 < 2; cavalo1++)
    {
      printf("**Cima**\n");
    }
    printf("**Direita**\n");
  }
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
