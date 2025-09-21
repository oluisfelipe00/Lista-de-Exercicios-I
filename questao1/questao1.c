#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite os tres lados do triangulo: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Nao e um triangulo valido.\n");
    }
    else if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("Triangulo Equilatero\n");
        } else if (a == b || a == c || b == c) {
            printf("Triangulo Isosceles\n");
        } else {
            printf("Triangulo Escaleno\n");
        }
    }
    else {
        printf("Nao e um triangulo valido.\n");
    }

    return 0;
}