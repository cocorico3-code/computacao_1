#include <stdio.h>
#include <locale.h>

//prototipos das funcoes
float calcularIMC(float peso, float altura);
char verificarSituacao(float peso, float altura);

/*
 * funcao: calcularIMC
 * proposito: calcula o indice de massa corporal (IMC) ultilizando a formula (peso / (altura * altura)).
 * parametros:
 *   - peso: o peso do paciente em kg (float).
 *   - altura: a altura do paciente em metros (float).
 * retorno: o valor do IMC calculado (float).
 */
float calcularIMC(float peso, float altura) {
    return peso / (altura * altura);
}

/*
 * funcao: verificarSituacao
 * proposito: determina a categoria/situacao do paciente baseando-se no valor do se IMC.
 * ultiliza a funcao calcularIMC internamente para obter o valor
 * parametros:
 *  - peso: o peso do paciente em kg (float).
 *  - altura: a altura do paciente em metros (float).
 * retorno: um caracter representando a situacao ('B' , 'N' , 'S' , 'O' , '1' ou '2').
 */
char verificarSituacao(float peso, float altura) {
    float imc = calcularIMC(peso, altura);
    
    if (imc < 18.5) {
        return 'B';
    } else if (imc < 25.0) {
        return 'N';
    } else if (imc < 30.0) {
        return 'S';
    } else if (imc < 35.0) {
        return 'O';
    } else if (imc < 40.0) {
        return '1';
    } else {
        return '2';
    }
}

int main() {
    //configura a localidade para suportar acentuacao setlocale(LC_ALL, "portuguese");
    
    float peso, altura;
    
    printf("--- sistma d calculo de IMC da UBS ---\n");
    printf("aviso: digite um peso ou altura menor ou igual a 0 para encerrar o programa. \n\n");
    
    //ultilizacao do ciclo do while
    do {
        printf("digite o peso (em kg): ");
        scanf("%f", &peso);
        
        //apenas pede a altura e faz o calculo se o peso for valido
        if (peso > 0) {
            printf("digite a altura (em metros): ");
            scanf("%f", &altura);
            
            //apenas calcula e imprime se a altura for valida
            if (altura > 0) {
                float imc = calcularIMC(peso, altura);
                char situacao = verificarSituacao(peso, altura);
                
                printf("-> IMC calculado: %.2f\n", imc);
                printf("-> situacao do paciente: %c\n\n", situacao);
            }
        }
    } while (peso > 0 && altura > 0);
    
    printf("programa encerrado.\n");
    
    return 0;
}

    
