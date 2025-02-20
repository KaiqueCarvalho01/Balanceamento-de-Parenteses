#include "Pilha.h"


// Variáveis
char pilha[TAMANHO];
int posicao = 0;

// Funções

/**
 * @brief Verifica se a pilha está cheia
 * 
 * Esta função verifica se a pilha atingiu sua capacidade máxima.
 * 
 * @return true se a pilha estiver cheia, false caso contrário
 */
bool estaCheia() {
    return posicao == TAMANHO;
}

/**
 * @brief Verifica se a pilha está vazia
 * 
 * Esta função verifica se a pilha não contém nenhum elemento.
 * 
 * @return true se a pilha estiver vazia, false caso contrário
 */
bool estaVazia() {
    return posicao == 0;
}

/**
 * @brief Insere um valor na pilha
 * 
 * Esta função insere um valor no topo da pilha, se a pilha não estiver cheia.
 * 
 * @param valor O valor a ser inserido na pilha
 * @return true se a inserção for bem-sucedida, false se a pilha estiver cheia
 */
bool push(char valor) {
    if (estaCheia()) {
        return false;
    }
    pilha[posicao] = valor;
    posicao++;
    return true;
}

/**
 * @brief Remove um valor da pilha
 * 
 * Esta função remove o valor do topo da pilha, se a pilha não estiver vazia, e armazena esse valor no ponteiro fornecido.
 * 
 * @param valor Ponteiro para armazenar o valor removido da pilha
 * @return true se a remoção for bem-sucedida, false se a pilha estiver vazia
 */
bool pop(char *valor) {
    if (estaVazia()) {
        return false;
    }
    posicao--;
    *valor = pilha[posicao];
    return true;
}

/**
 * @brief Verifica se os parênteses estão balanceados
 * 
 * Esta função verifica se todos os parênteses em uma expressão estão corretamente balanceados.
 * 
 * @param expressao A expressão a ser verificada
 * @return true se os parênteses estiverem balanceados, false caso contrário
 */
bool balanceando(char *expressao) {
    char parenteses;

    int caracteres = strlen(expressao);
    // Percorre a expressão
    for (int i = 0; i < caracteres; i++) {
        parenteses = expressao[i];

        //Se for um parêntese de abertura, insere na pilha
        if (parenteses == '(' ) {
            if (!push(parenteses)) {
                return false; // Pilha cheia
            }
        }
        //Se for um parêntese de fechamento, remove da pilha
        else if (parenteses == ')' ) {
            char topo;
            if (!pop(&topo)) {
                return false; // Pilha vazia
            }
            //Se o parêntese de fechamento não corresponder ao topo da pilha
            if (topo != '(' ) {
                return false; // Parêntese de fechamento não corresponde ao topo da pilha
            }
        }
    }

    return estaVazia(); // Se a pilha estiver vazia no final, está balanceado
}