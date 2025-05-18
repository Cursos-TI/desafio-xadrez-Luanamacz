#include <stdio.h>


void moverTorreRecursivo(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorreRecursivo(casas - 1);
    }
}

void moverBispoRecursivo(int casas) {
    if (casas > 0) {
        printf("Cima, Direita\n");
        moverBispoRecursivo(casas - 1);
    }
}


void moverRainhaRecursivo(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainhaRecursivo(casas - 1);
    }
}

int main() {

    printf("Movimento da Torre (Recursivo):\n");
    int torreCasas = 5;
    moverTorreRecursivo(torreCasas);
    printf("\n");

    printf("Movimento do Bispo (Recursivo com Loops Aninhados):\n");
    int bispoCasas = 5;
    for (int i = 0; i < bispoCasas; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima, Direita\n");
        }
    }
    printf("\n");
    printf("Movimento da Rainha (Recursivo):\n");
    int rainhaCasas = 8;
    moverRainhaRecursivo(rainhaCasas);
    printf("\n");
    printf("Movimento do Cavalo (Loops Aninhados Complexos):\n");
    int movimento_vertical = 2;
    int movimento_horizontal = 1;

    for (int v = 0; v < movimento_vertical; v++) {
        printf("Cima\n");
      
        for (int h = 0; h < movimento_horizontal && v == movimento_vertical - 1; h++) {
            printf("Direita\n");
        }
    }
    printf("\n");

    return 0;
}
