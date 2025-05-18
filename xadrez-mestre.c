#include <stdio.h>

void moverTorre(int movimentos) {
    if (movimentos == 0) return;
    printf("Direita\n");
    moverTorre(movimentos - 1);
}

void moverRainha(int movimentos) {
    if (movimentos == 0) return;
    printf("Esquerda\n");
    moverRainha(movimentos - 1);
}

void moverBispoRecursivo(int movimentos) {
    if (movimentos == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(movimentos - 1);
}

void moverBispoComLoops(int movimentosVerticais, int movimentosHorizontais) {
    for (int v = 0; v < movimentosVerticais; v++) {
        for (int h = 0; h < movimentosHorizontais; h++) {
            printf("Cima Direita\n");
        }
    }
}

void moverCavalo() {
    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    printf("Movimento do Cavalo (2 casas para cima e 1 para a direita):\n");

    for (int i = 0; i < 3; i++) { 
        for (int j = 0; j < 3; j++) {
            if (i == 2 && j == 1) {
                
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
                break;
            } else {
                continue; 
            }
        }
    }
}

int main() {
 
    printf("Movimento da Torre (5 casas para a direita):\n");
    moverTorre(5);

    printf("\n");

    printf("Movimento do Bispo (5 casas na diagonal Cima Direita - recursividade):\n");
    moverBispoRecursivo(5);

    printf("\n");

    printf("Movimento do Bispo (usando loops aninhados):\n");
    moverBispoComLoops(2, 2); // exemplo: 2 movimentos verticais, 2 horizontais

    printf("\n");

    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    moverRainha(8);

    printf("\n");
 
    moverCavalo();

    return 0;
}
