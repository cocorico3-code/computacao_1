#include <stdio.h>

#define TAMANHO 5 // Define o tamanho do vetor 
int main() {
    int vetor[TAMANHO];
    int i, j, valor_temporario, repetido;

    printf("--- Preenchimento de Vetor com Valores Distintos ---\n");
    printf("Você precisa inserir %d valores diferentes.\n\n", TAMANHO);

    // Loop para preencher cada posição do vetor
    for (i = 0; i < TAMANHO; i++) {
        
        // laço de repeticao para continuar pedindo valores caso um seja repetido 
         
        do {
            repetido = 0; 
            
            printf("Digite o valor para a posicao [%d]: ", i);
            scanf("%d", &valor_temporario);

            // Verifica se o valor digitado já existe nas posições anteriores do vetor
            for (j = 0; j < i; j++) {
                if (vetor[j] == valor_temporario) {
                    repetido = 1; // Marca que encontrou um número repetido
                    printf("  -> AVISO: O valor %d ja foi inserido! Por favor, insira um valor distinto.\n", valor_temporario);
                    break; // interrompe a verificacao depois de achar a repeticao
                }
            }

        } while (repetido == 1); // Se for repetido, o laço roda novamente pedindo um novo valor

        // Se chegou aqui,o valor nao e repetido.
        vetor[i] = valor_temporario;
    }

    // Exibe o vetor final para confirmar
    printf("\n--- Vetor preenchido com sucesso ---\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("[%d] ", vetor[i]);
    }
    printf("\n");

    return 0;
}
