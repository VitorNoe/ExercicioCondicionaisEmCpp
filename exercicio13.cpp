#include <iostream>

int main() {
    float notaAluno, notaRecuperacao, presenca;

    printf("Digite a nota do aluno da cadeira: ");
    scanf("%f", &notaAluno);

    printf("Digite a nota da recuperação: ");
    scanf("%f", &notaRecuperacao);

    printf("Digite a porcentagem de presenca: ");
    scanf("%f", &presenca);

    float notaAprovacao = 10 - notaAluno;
    float somaNota = notaAluno + notaRecuperacao;

    if (presenca >= 75 && somaNota >= 10) {
        printf("Aprovado!\n");
    } else if (somaNota < 10) {
        printf("Reprovado.\n");
    }

    return 0;
}