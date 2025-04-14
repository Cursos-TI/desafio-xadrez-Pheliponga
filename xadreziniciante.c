#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() { 
  
    int movb = 0, movt = 0, movr = 0;

    while (movt <= 5)
    {
        printf("Torre: Direita \n");
        movt++;
    }
    // Movimentação da torre para 5 casas a direita utilizando WHILE.

    do
    {
        printf("Bispo: Cima Direita \n");
        movb++;
    } while (movb <= 5);
    // Movimentação do bispo 8 casas na diagonal superior direita utilizanso DO WHILE.

    for ( movr; movr <= 8; movr++)
    {
        printf("Rainha: Esquerda \n");
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
