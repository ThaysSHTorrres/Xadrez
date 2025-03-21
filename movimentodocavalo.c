#include <stdio.h>

int main() {
    // Definindo as variáveis para o movimento do Cavalo
    int casasParaBaixo = 2;  // O Cavalo deve mover duas casas para baixo
    int casasParaEsquerda = 1;  // O Cavalo deve mover uma casa para a esquerda

    // Movimentação do Cavalo - começando com a linha em branco
    printf("\n");

    // Loop para mover o Cavalo para baixo (2 casas)
    for (int i = 0; i < casasParaBaixo; i++) {
        printf("Baixo\n");  // Imprime o movimento "Baixo"
    }

    // Loop para mover o Cavalo para a esquerda (1 casa)
    int j = 0;
    while (j < casasParaEsquerda) {
        printf("Esquerda\n");  // Imprime o movimento "Esquerda"
        j++;  // Incrementa para garantir que o loop termine
    }

    return 0;
}
