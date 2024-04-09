#include <iostream>

int main() {
    int numero1, numero2;
    char operacao;

    printf("Insira o primeiro número: ");
    scanf("%d", &numero1);

    printf("Insira o segundo número: ");
    scanf("%d", &numero2);

    printf("Insira a operação matemática (+, -, *, /): ");
    scanf(" %c", &operacao);

    int resultado;

    if (operacao == '+') {
        resultado = numero1 + numero2;
    } else if (operacao == '-') {
        resultado = numero1 - numero2;
    } else if (operacao == '*') {
        resultado = numero1 * numero2;
    } else if (operacao == '/') {
        resultado = numero1 / numero2;
        } 

    printf("%d\n", resultado);

    return 0;
}
