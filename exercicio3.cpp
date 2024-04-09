#include <iostream>

int main() {
    int num;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    
        if (num % 3 == 0 && num % 5 == 0) {
            printf("È múltiplo por 3 e 5.\n");
        } else {
            printf("Não é múltiplo por 3 e 5.\n");
        }

    return 0;
}