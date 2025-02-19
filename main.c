#include <stdio.h>
#include <stdbool.h>
#include <string.h>

enum {
    TAMANHO = 20,
};

int pilha[TAMANHO];
int posicao = 0;

//Funcoes
bool estaCheia() {
    return posicao == TAMANHO;
}

bool push(int valor) {
    if (estaCheia()) {
        return false;
    }
    if(valor == '(' || valor == '{' || valor == '[') {
        pilha[posicao] = valor;
        posicao++;
        return true;
    }

}

bool pop(int *valor) {
    if (posicao == 0) {
        return false;
    }
    if(valor == ')' || valor == '}' || valor == ']') {
        posicao--;
        *valor = pilha[posicao];
        return true;
    }
    
}


int main(void) {
    //Balanceamento de parenteses
   // char valor[TAMANHO];
    int valor =0;
    valor = (2*25+(55/2))/3;

 /*   printf("Digite uma expresssao para a pilha: ");
    fgets(valor, TAMANHO, stdin); */

    if (estaCheia()) {
        printf("Pilha cheia");
    }
    else {
        printf("Pilha vazia");
    }


    return 0;
}