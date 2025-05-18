#include <stdio.h>

int main() {
    int movimentosTorre = 5;
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 0; i < movimentosTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");
    int movimentosBispo = 5;
    int i = 0;
    printf("Movimento do Bispo (5 casas na diagonal Cima Direita):\n");
    while (i < movimentosBispo) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\n");
    int movimentosRainha = 8;
    int j = 0;
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    do {
        printf("Esquerda\n");
        j++;
    } while (j < movimentosRainha);

    printf("\n");
    int movimentosParaBaixo = 2;
    int movimentosParaEsquerda = 1;
    printf("Movimento do Cavalo (2 casas para baixo e 1 para a esquerda):\n");

    for (int k = 0; k < movimentosParaBaixo; k++) {
        printf("Baixo\n");
    }

    int l = 0;
    while (l < movimentosParaEsquerda) {
        printf("Esquerda\n");
        l++;
    }

    return 0;
}
