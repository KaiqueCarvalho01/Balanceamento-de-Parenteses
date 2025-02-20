# Algoritmo de Balanceamento de Parênteses

## Descrição do Projeto

Este projeto implementa um algoritmo para verificar se os parênteses em uma expressão numérica estão balanceados. A verificação é feita utilizando uma estrutura de dados do tipo pilha.

## Funcionamento do Algoritmo

1. O algoritmo recebe uma expressão numérica como entrada, por exemplo: `(2*25+(55/2))/3`.
2. Cada vez que um parêntese de abertura `(` é encontrado na string, ele é armazenado em uma pilha de caracteres.
3. Quando um parêntese de fechamento `)` é encontrado, o elemento do topo da pilha é removido.
4. O algoritmo continua processando a string até que todos os caracteres tenham sido verificados.
5. Se durante o processamento for necessário remover um elemento da pilha e a pilha estiver vazia, a expressão não está balanceada.
6. Se ao final do processamento ainda houver elementos na pilha, a expressão também não está balanceada.

## Estrutura do Projeto

- `Pilha.h`: Arquivo de cabeçalho que contém as declarações das funções e variáveis utilizadas na implementação da pilha.
- `Pilha.c`: Implementação das funções da pilha, incluindo as funções para verificar se a pilha está cheia ou vazia, inserir e remover elementos, e verificar se os parênteses estão balanceados.
- `main.c`: Função principal do programa que utiliza as funções da pilha para verificar se os parênteses em uma expressão estão balanceados.

## Como Executar

1. Clone o repositório para o seu ambiente local.
2. Compile os arquivos `Pilha.c` e `main.c` utilizando um compilador C.
3. Execute o programa.

## Contribuição
Sinta-se à vontade para contribuir com melhorias ou correções para este projeto. Para isso, faça um fork do repositório, crie uma branch para suas alterações e envie um pull request.

## Licença
Este projeto está licenciado sob a MIT License.
