#include <iostream>

int main() {
    float nota1, nota2, nota3, presenca;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    printf("Digite a porcentagem de presenca: ");
    scanf("%f", &presenca);

    float media = (nota1 + nota2 + nota3) / 3;

    if (presenca == 100 && media >= 7) {
        printf("Aprovado! Parabéns!\n");
    } else if (presenca >= 75 && media >= 7) {
        printf("Aprovado!\n");
    } else if (media >= 7) {
        printf("Aprovado, mas com baixa presenca.\n");
    } else if (media >= 5) {
        printf("Recuperacao.\n");
    } else {
        printf("Reprovado.\n");
    }

    return 0;
}
