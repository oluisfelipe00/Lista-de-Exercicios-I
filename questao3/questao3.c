#include <stdio.h>

void entregar_cedulas(int valor) {
    // Verifica se o valor não pode ser pago exatamente
    if (valor < 2) {
        printf("Valor não pode ser pago exatamente com as cédulas disponíveis.\n");
        return;
    }

    // Cédulas disponíveis
    int cedulas_100 = 0, cedulas_50 = 0, cedulas_20 = 0, cedulas_10 = 0;
    int cedulas_5 = 0, cedulas_2 = 0;

    // Calculando quantas cédulas de cada valor serão entregues
    if (valor >= 100) {
        cedulas_100 = valor / 100;
        valor = valor % 100;
    }
    if (valor >= 50) {
        cedulas_50 = valor / 50;
        valor = valor % 50;
    }
    if (valor >= 20) {
        cedulas_20 = valor / 20;
        valor = valor % 20;
    }
    if (valor >= 10) {
        cedulas_10 = valor / 10;
        valor = valor % 10;
    }
    if (valor >= 5) {
        cedulas_5 = valor / 5;
        valor = valor % 5;
    }
    if (valor >= 2) {
        cedulas_2 = valor / 2;
        valor = valor % 2;
    }

    // Se restar algum valor que não pode ser pago (1 real)
    if (valor > 0) {
        printf("Valor não pode ser pago exatamente com as cédulas disponíveis.\n");
        return;
    }

    // Exibe o resultado
    printf("Cédulas entregues:\n");
    if (cedulas_100 > 0) printf("Cédulas de 100: %d\n", cedulas_100);
    if (cedulas_50 > 0) printf("Cédulas de 50: %d\n", cedulas_50);
    if (cedulas_20 > 0) printf("Cédulas de 20: %d\n", cedulas_20);
    if (cedulas_10 > 0) printf("Cédulas de 10: %d\n", cedulas_10);
    if (cedulas_5 > 0) printf("Cédulas de 5: %d\n", cedulas_5);
    if (cedulas_2 > 0) printf("Cédulas de 2: %d\n", cedulas_2);
}

int main() {
    int valor;

    // Solicita o valor ao usuário
    printf("Digite o valor para saque: ");
    scanf("%d", &valor);

    // Chama a função para calcular e entregar as cédulas
    entregar_cedulas(valor);

    return 0;
}
