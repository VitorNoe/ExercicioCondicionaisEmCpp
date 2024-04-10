#include <iostream>

int main() {
    int numleads;

    printf("Digite o número de leads recebidos hoje: ");
    scanf("%d", &numleads);

    if (numleads <= 5) {
        printf("Quantidade de leads baixa.\n");
    } else if (numleads >= 6 && numleads <= 10) {
        printf("Quantidade de leads esperada.\n");
    } else {
        printf("Quantidade de leads alta.\n");
    }
}