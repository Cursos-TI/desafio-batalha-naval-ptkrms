#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios

    // Declarando uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    int tabuleiro[10][10];

    // Inicializando todas as posições com zero.
    for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                tabuleiro[i][j] = 0; 
            }
    };

    // Posicionando um navio verticalmente na coluna 2.
    for (int i = 4; i < 7; i++) {
        tabuleiro[i][2] = 3; 
    }

    // Posicionando um navio horizontalmente na linha 2.
    for (int i = 5; i < 8; i++) {
        tabuleiro[2][i] = 3; 
    }

    //posicionando um navio diagonalmente da posição (7,4) até (5,5).
    for (int i = 4, j = 7; i <= 7 && j > 4; i++, j--) {
        tabuleiro[i][j] = 3; 
    }

    
    //posicionando um navio diagonalmente da posição (0,0) até (2,2).
    for (int i = 0, j = 0; i <= 2 && j <= 2; i++, j++) {
    tabuleiro[i][j] = 3;
}

    // Exibe o tabuleiro inicial.
    printf("Tabuleiro inicial:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]); 
        }
        printf("\n");
    }


    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
