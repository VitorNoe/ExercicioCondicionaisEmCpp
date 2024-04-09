#include <iostream>

int main() {
    char converter;
    double temperatura;

    printf("Escolha a conversão desejada:\n");
    printf("1) Celsius para Fahrenheit\n");
    printf("1) Fahrenheit para Celsius\n");
    printf("Opção (1 ou 2): ");
    scanf(" %c", &converter);

    printf("Insira a temperatura: ");
    scanf("%lf", &temperatura);

    double resultado;

    if (converter == '1') {
        resultado = (temperatura * 1.8) + 32;
        printf("%.2lf graus Celsius equivalem a %.2lf graus Fahrenheit.\n", temperatura, resultado);
    } else if (converter == '2') {
        resultado = (temperatura - 32) / 1.8;
        printf("%.2lf graus Fahrenheit equivalem a %.2lf graus Celsius.\n", temperatura, resultado);
    } 

    return 0;
}