#include <iostream>

int main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("Positivo.\n");
    } else {
        printf("Negativo.\n");
    }

    return 0;
}