#include <stdio.h>

int main () {

printf("\n");

    //Mover Rainha 8 casas a esquerda
    printf("Rainha:\n");

    for (int R = 0; R < 8; R++) {

        printf("Esquerda\n");

    } //Final

printf("\n");

    //Mover Bispo 5 casas diagonal direita
    int B = 0;

        printf("Bispo: \n");

        while (B < 5) {

            printf("Diagonal Direita\n");
            B++;

    } //Final

printf("\n");

    //Mover Torre 5 casas cima
    int T = 0;

        printf("Torre: \n");

        do {

            printf("Cima\n");
            T++;

        } while (T < 5); //Final

printf("\n");

    //Mover Cavalo 2 casas cima e 1 direita
    int movimento = 1;

    printf("Cavalo: \n");

    while (movimento--) {

        for (int C = 0; C < 2; C++) {

            printf("Cima\n");

        } //Final

    printf("Direita\n");

    }

}