#ifndef PILHA_H
#define PILHA_H
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Constantes
enum {
    TAMANHO = 20,
};


// Variáveis
extern char pilha[TAMANHO]; // Array que representa a pilha
extern int posicao; // Índice que indica a posição atual no topo da pilha

// Protótipos
bool push(char valor);
bool pop(char *valor);
bool estaCheia();
bool estaVazia();
bool balanceando(char *expressao);


#endif //PILHA_H
