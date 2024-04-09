#include <iostream>

int main() {
    float x, y;

    printf("Insira as coordenadas (x, y) do ponto no plano cartesiano:\n");
    printf("x: ");
    scanf("%f", &x);
    printf("y: ");
    scanf("%f", &y);


    if (x > 0 && y > 0)
        printf("O ponto (%.2f, %.2f) está no primeiro quadrante.\n", x, y);
    else if (x < 0 && y > 0)
        printf("O ponto (%.2f, %.2f) está no segundo quadrante.\n", x, y);
    else if (x < 0 && y < 0)
        printf("O ponto (%.2f, %.2f) está no terceiro quadrante.\n", x, y);
    else if (x > 0 && y < 0)
        printf("O ponto (%.2f, %.2f) está no quarto quadrante.\n", x, y);
    else if (x == 0 && y != 0)
        printf("O ponto (%.2f, %.2f) está sobre o eixo Y.\n", x, y);
    else if (x != 0 && y == 0)
        printf("O ponto (%.2f, %.2f) está sobre o eixo X.\n", x, y);
    else
        printf("O ponto (%.2f, %.2f) está na localização.\n", x, y);

    return 0;
}

// O quadrante significa a quarta parte da circunfência.
// Primeiro quadrante: números positivos.
// Segundo quadrante: números negativos ou positivos.
// Terceiro quadrante: números negativos.
// Quarto quadrante: números negativos ou positivos.