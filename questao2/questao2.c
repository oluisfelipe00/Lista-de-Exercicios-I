#include <stdio.h>

void calcular_imc(float peso, float altura) {
   
    float imc = peso / (altura * altura);
    
    printf("Seu IMC é: %.2f\n", imc);
   
    if (imc < 18.5) {
        printf("Você está na categoria: Abaixo do peso\n");
    } else if (imc >= 18.5 && imc <= 24.9) {
        printf("Você está na categoria: Peso normal\n");
    } else if (imc >= 25 && imc <= 29.9) {
        printf("Você está na categoria: Sobrepeso\n");
    } else if (imc >= 30 && imc <= 34.9) {
        printf("Você está na categoria: Obesidade grau I\n");
    } else if (imc >= 35 && imc <= 39.9) {
        printf("Você está na categoria: Obesidade grau II\n");
    } else {
        printf("Você está na categoria: Obesidade grau III\n");
    }
}

int main() {
    float peso, altura;  
    printf("Digite seu peso em kg: ");
    scanf("%f", &peso);

    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    calcular_imc(peso, altura);

    return 0;
}


