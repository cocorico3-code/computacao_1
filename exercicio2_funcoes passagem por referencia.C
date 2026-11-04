#include <stdio.h>
#include <math.h>

int calcula_raizes(float a, float b, float c, float *x1, float *x2) {
    if (a == 0) {
        return 0; // Nao e uma equacao do segundo grau
    }

    float delta = (b * b) - (4 * a * c);

    if (delta < 0) {
        return 0; // Nao existem raizes reais
    }

    *x1 = (-b + sqrt(delta)) / (2 * a);
    *x2 = (-b - sqrt(delta)) / (2 * a);

    return 1; // Calculo bem sucedido
}

int main() {
    float a, b, c;
    float raiz1, raiz2;

    // Entrada de dados
    printf("Digite o valor do coeficiente 'a': ");
    scanf("%f", &a); // Corrigido de 'sacnf'

    printf("Digite o valor do coeficiente 'b': ");
    scanf("%f", &b);

    printf("Digite o valor do coeficiente 'c': ");
    scanf("%f", &c);

    // Chamada da funcao passando os enderecos de memoria de 'raiz1' e 'raiz2'
    if (calcula_raizes(a, b, c, &raiz1, &raiz2)) {
        printf("\nAs raizes da equacao sao:\n");
        printf("x1 = %.2f\n", raiz1);
        printf("x2 = %.2f\n", raiz2); // Corrigido: adicionada a vírgula
    } else {
        printf("\nA equacao nao possui raizes reais (delta < 0) ou 'a' e igual a 0.\n");
    }

    return 0;
}
