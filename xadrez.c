#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

  //Começamos com as funções recursivas:

// ----------------------------
// Função recursiva da TORRE
// ----------------------------
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1); 
}

// ----------------------------
// Função recursiva da RAINHA
// ----------------------------
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// ----------------------------
// Função recursiva do BISPO
// ----------------------------
void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

// ----------------------------
// BISPO com loops aninhados
// ----------------------------
void moverBispoComLoops(int vertical, int horizontal) {
    for (int i = 1; i <= vertical; i++) {
        for (int j = 1; j <= horizontal; j++) {
            printf("Diagonal: Cima Direita (%d,%d)\n", i, j);
        }
    }
}

// ----------------------------
// Movimento complexo do CAVALO
// ----------------------------
void moverCavalo() {
    printf("\nMovimento do Cavalo: 🐴\n");

    for (int i = 0; i < 3; i++) {
        if (i < 2) {
            printf("Cima\n");
        } else {
            printf("Direita\n");
        }
    }
}

  
    // Por fim, a função principal

int main() {

   printf("Desafio Movimentos das Peças de Xadrez!✨♟️\n");

    // Movimento da Torre usando recursividade
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // Movimento do Bispo com recursividade
    printf("\nMovimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(5);

    // Movimento do Bispo com loops aninhados
    printf("\nMovimento do Bispo (Com Loops):\n");
    moverBispoComLoops(2, 2); // exemplo: 2 verticais x 2 horizontais

    // Movimento da Rainha com recursividade

    printf("\nMovimento da Rainha 👑\n");
    moverRainha(8);

    // Movimento complexo do Cavalo com loops aninhados e controle de fluxo
    moverCavalo();

printf("Novo commit3\n");

    return 0;
}

        

