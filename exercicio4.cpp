#include <iostream>

int main() {
    int lado1, lado2, lado3;

    printf("Insira o primeiro número do lado do triângulo: ");
    scanf("%d", &lado1);
    printf("Insira o segundo número do lado do triângulo: ");
    scanf("%d", &lado2);
    printf("Insira o terceiro número do lado do triângulo: ");
    scanf("%d", &lado3);

    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {
        if (lado1 == lado2 && lado2 == lado3) {
            printf("Equilátero.\n");
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("Isósceles.\n");
        } else {
            printf("Escaleno.\n");
        }

    }

    return 0;
}

//Equilátero se todos os lados forem iguais.
//Isósceles se dois lados forem iguais.
//Escaleno se todos os lados forem diferentes.