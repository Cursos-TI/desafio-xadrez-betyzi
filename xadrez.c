#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    
// Este código irá imprimir a movimentação das peças de xadres na saida, usando estruturas de repetição (loops)

    // ***************************
    // TORRE - movimento com 'for'
    // ***************************
    // A torre vai andar 5 casas para a direita
    printf("Movimento da Torre: 5 casas para a direita ♟️ ➡️\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // -----------------------------
    // BISPO - movimento com 'while'
    // -----------------------------
    // O bispo vai andar 5 casas na diagonal: cima e direita
    printf("\nMovimento do Bispo: 5 casas na diagonal ♟️ ↗️\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    //**************************************
    // RAINHA 👑 - movimento com 'do-while'
    //**************************************
    // A rainha vai andar 8 casas para a esquerda
    printf("\nMovimento da Rainha: 8 casas para esquerda 👑⬅️\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    printf("Novo commit1\n");
    
        return 0;
}
