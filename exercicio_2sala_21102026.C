#include <stdio.h>

//prototipo da funcao int eh Bissexto(int ano);
/**
 * Propósito: Verifica se um determinado ano é bissexto.
 * Parâmetro: 
 *   - ano: valor inteiro positivo representando o ano (int)
 * Retorno: 
 *   - 1 se o ano for bissexto
 *   - 0 caso contrário
 */
int ehBissexto(int ano) {
    if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) {
        return 1; // É bissexto
    } else {
        return 0; // Não é bissexto
    }
}

int main() {
    int ano;
    
    printf("digite um ano: ");
    scanf("%d", &ano);
    
    if (ehBissexto(ano)) {
        printf("o ano %d e bissexto (retornou 1).\n", ano);
    } else {
        printf("o ano %d nao e bissexto (retornou 0).\n", ano);
    }
    
    return 0;
}
