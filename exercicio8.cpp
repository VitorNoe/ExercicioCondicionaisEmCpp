#include <iostream>

int main() {
    double altura, peso;

    printf("Insira sua altura em metros: ");
    scanf("%lf", &altura);

    printf("Insira seu peso em quilogramas: ");
    scanf("%lf", &peso);

    double imc = peso / (altura * altura);

    printf("Seu IMC é: %.2lf\n", imc);

    if (imc < 18.5) {
        printf("Categoria: Abaixo do peso\n");
    } else if (imc >= 18.5 && imc < 25) {
        printf("Categoria: Peso normal\n");
    } else if (imc >= 25 && imc < 30) {
        printf("Categoria: Sobrepeso\n");
    } else {
        printf("Categoria: Obeso\n");
    }

    return 0;
}