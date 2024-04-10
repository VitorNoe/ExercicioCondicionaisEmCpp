#include <iostream>

int main() {
    float saldo = 1000.0f; // O saldo atual e insirido ali.
    float retirada;

    printf("Digite a quantia que deseja retirar: ");
    scanf("%f", &retirada);

    if (saldo >= retirada) {
        printf("Você pode fazer a retirada.\n");
    } else {
        printf("Saldo insuficiente. Seu saldo atual é de R$ %.2f\n", saldo);
    }

    return 0;
}