#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_secreto, palpite;

    // Inicializa a semente do gerador de números aleatórios
    srand(time(NULL));

    // Gera um número secreto entre 1 e 100
    numero_secreto = rand() % 100 + 1;

    // Instruções do jogo
    printf("Bem-vindo ao jogo de adivinhação!\n");
    printf("Eu tenho um número secreto entre 1 e 100. Tente adivinhar!\n");

    // Loop para o jogador tentar adivinhar o número
    do {
        // Solicita ao jogador um palpite
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);

        // Dicas com base no palpite
        if (palpite == numero_secreto) {
            printf("Parabéns, você acertou!\n");
        } else if (palpite > numero_secreto) {
            printf("Muito alto, tente um número menor!\n");
        } else {
            printf("Muito baixo, tente um número maior!\n");
        }
    } while (palpite != numero_secreto); // O loop continua até o usuário acertar

    return 0;
}
