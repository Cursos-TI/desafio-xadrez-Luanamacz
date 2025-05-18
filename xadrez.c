#include <stdio.h>

int main() {


    printf("****Movimentação da Torre!! ****\n");
    int i =1;
    while(i <= 5) {
        printf("Torre: Direita\n");
        i++;
    }

    printf("****Movimentação do Bispo!! ****\n");
    int j = 1;
    do {
        printf("Bispo: Direita\n"); 
        printf("Bispo: Cima\n");
        j++;
    } while (j <= 5);

    printf("****Movimentação da Rainha!! ****\n");

    for (int k = 1; k <= 8; k++) {
    printf("Rainha: Esquerda\n");
}

    return 0;
}
