#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    // Aprimorei o código colocando agora a estrutura para imprimir o movimento do cavalo

printf("Desafio Movimentos das Peças de Xadrez!✨♟️\n");

    // ----------------------------
    // TORRE - movimento com 'for'
    // ----------------------------
    // A torre vai andar 5 casas para a direita
    printf("Movimento da Torre: 5 casas para a direita ➡️\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // *****************************
    // BISPO - movimento com 'while'
    // *****************************
    // O bispo vai andar 5 casas na diagonal: cima e direita
    printf("\nMovimento do Bispo: 5 casas na diagonal ↗️\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    // ------------------------------------
    // RAINHA 👑 - movimento com 'do-while'
    // ------------------------------------
    // A rainha vai andar 8 casas para a esquerda
    printf("\nMovimento da Rainha: 8 casas para esquerda 👑⬅️\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    // **************************
    // CAVALO - movimento em "L"
    //***************************
    // O cavalo vai andar 2 casas para baixo e 1 para a esquerda
    printf("\nMovimento do Cavalo:  ⬇️ ⬅️\n");

    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");

        int j = 0;
        while (j < 1) {
            j++;

        }
    }

    // Depois de andar 2 pra baixo, ele vai 1 pra esquerda
    printf("Esquerda\n");

        return 0;
}
