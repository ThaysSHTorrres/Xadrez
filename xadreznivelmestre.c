#include <stdio.h>

// Função recursiva para o movimento da Torre (movimentos verticais e horizontais)
void mover_torre(int x, int y, int casas, char direcao) {
    if (casas <= 0) return;

    // Movimento para cima
    if (direcao == 'C') {
        printf("Cima\n");
        mover_torre(x, y - 1, casas - 1, direcao);
    }
    // Movimento para baixo
    else if (direcao == 'B') {
        printf("Baixo\n");
        mover_torre(x, y + 1, casas - 1, direcao);
    }
    // Movimento para a esquerda
    else if (direcao == 'E') {
        printf("Esquerda\n");
        mover_torre(x - 1, y, casas - 1, direcao);
    }
    // Movimento para a direita
    else if (direcao == 'D') {
        printf("Direita\n");
        mover_torre(x + 1, y, casas - 1, direcao);
    }
}

// Função recursiva para o movimento do Bispo (movimento diagonal)
void mover_bispo(int x, int y, int casas, int dx, int dy) {
    if (casas <= 0) return;

    // Movimentos diagonais
    if (dx > 0 && dy > 0) {
        printf("Direita\n");
        printf("Cima\n");
        mover_bispo(x + 1, y - 1, casas - 1, dx, dy);
    } else if (dx < 0 && dy > 0) {
        printf("Esquerda\n");
        printf("Cima\n");
        mover_bispo(x - 1, y - 1, casas - 1, dx, dy);
    } else if (dx > 0 && dy < 0) {
        printf("Direita\n");
        printf("Baixo\n");
        mover_bispo(x + 1, y + 1, casas - 1, dx, dy);
    } else if (dx < 0 && dy < 0) {
        printf("Esquerda\n");
        printf("Baixo\n");
        mover_bispo(x - 1, y + 1, casas - 1, dx, dy);
    }
}

// Função recursiva para o movimento da Rainha (combinando Torre e Bispo)
void mover_rainha(int x, int y, int casas, char direcao) {
    if (casas <= 0) return;

    if (direcao == 'C') {
        printf("Cima\n");
        mover_rainha(x, y - 1, casas - 1, direcao);
    } else if (direcao == 'B') {
        printf("Baixo\n");
        mover_rainha(x, y + 1, casas - 1, direcao);
    } else if (direcao == 'E') {
        printf("Esquerda\n");
        mover_rainha(x - 1, y, casas - 1, direcao);
    } else if (direcao == 'D') {
        printf("Direita\n");
        mover_rainha(x + 1, y, casas - 1, direcao);
    }
}

// Função para o movimento do Cavalo, utilizando loops aninhados
void mover_cavalo(int x, int y) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima\n");
            printf("Direita\n");
        }
    }
}

// Função principal para testar os movimentos das peças
int main() {
    int casas = 3;  // Número de casas a serem movidas

    // Movimentos da Torre
    printf("Movimento da Torre:\n");
    mover_torre(4, 4, casas, 'C');  // Cima
    mover_torre(4, 4, casas, 'B');  // Baixo
    mover_torre(4, 4, casas, 'E');  // Esquerda
    mover_torre(4, 4, casas, 'D');  // Direita
    printf("\n");

    // Movimentos do Bispo
    printf("Movimento do Bispo:\n");
    mover_bispo(4, 4, casas, 1, 1);  // Diagonal direita-cima
    mover_bispo(4, 4, casas, -1, 1); // Diagonal esquerda-cima
    mover_bispo(4, 4, casas, 1, -1); // Diagonal direita-baixo
    mover_bispo(4, 4, casas, -1, -1); // Diagonal esquerda-baixo
    printf("\n");

    // Movimentos da Rainha
    printf("Movimento da Rainha:\n");
    mover_rainha(4, 4, casas, 'C');  // Cima
    mover_rainha(4, 4, casas, 'B');  // Baixo
    mover_rainha(4, 4, casas, 'E');  // Esquerda
    mover_rainha(4, 4, casas, 'D');  // Direita
    printf("\n");

    // Movimentos do Cavalo
    printf("Movimento do Cavalo:\n");
    mover_cavalo(4, 4);  // Cavalo se move em "L" para cima e direita
    printf("\n");

    return 0;
}
