#include <stdio.h>
#include "Pilha.C"
#include "Pilha.h"

/**
 * @brief Função principal do programa
 * 
 * Esta função principal verifica se os parênteses em uma expressão matemática estão balanceados.
 * 
 * @return 0 se o programa for executado com sucesso
 */
int main(void) {
    char expressao[TAMANHO];

    //Dada a expressão
    strcpy(expressao, "(2*25+(55/2))/3");
    
    //Imprimindo a expressão
    puts("Expressao: ");
    puts(expressao);

    if (balanceando(expressao)) {
        printf("Parenteses balanceados\n");
    } else {
        printf("Parenteses nao estao balanceados\n");
    }

    return 0;
}
