#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() { 
  
    int movb = 0, movt = 0, movr = 0;

    int movimentocavalo = 2;

    while (movt <= 5)
    {
        printf("Torre: Direita \n");
        movt++;
    }
    printf("\n");
    // Movimentação da torre para 5 casas a direita utilizando WHILE.

    do
    {
        printf("Bispo: Cima Direita \n");
        movb++;
    } while (movb <= 5);
    printf("\n");
    // Movimentação do bispo 5 casas na diagonal superior direita utilizando DO WHILE.

    for ( movr; movr <= 8; movr++)
    {
        printf("Rainha: Esquerda \n");
    }
    printf("\n");
    // Movimentação da rainha 8 casas a esquerda utilizando o FOR.


    for (int movc = 0; movc < 1; movc++)
    {
        while (movimentocavalo--){
            printf("Cavalo: Baixo \n");
        }
        printf("Cavalo: Esquerda \n");
    }
    printf("\n");
    //Movimentação do cavalo duas vezes para baixo utilizando WHILE e uma vez para a esquerda utilizando o FOR.
    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
