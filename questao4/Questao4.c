#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_secreto, palpite;

    srand(time(NULL));
    numero_secreto = rand() % 100 + 1;

    printf("Bem-vindo ao jogo de adivinhação!\n");
    printf("Eu tenho um número secreto entre 1 e 100. Tente adivinhar!\n");

    do {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);

        if (palpite == numero_secreto) {
            printf("Parabéns, você acertou!\n");
        } else if (palpite > numero_secreto) {
            printf("Muito alto, tente um número menor!\n");
        } else {
            printf("Muito baixo, tente um número maior!\n");
        }
    } while (palpite != numero_secreto); 

    return 0;
}

