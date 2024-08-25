# Guia Básico de Alocação de Memória em C

Este guia oferece uma visão geral sobre como utilizar a alocação de memória dinâmica em C, incluindo as funções `malloc`, `calloc`, `realloc` e `free`.

## 1. Introdução

A alocação dinâmica de memória é uma técnica que permite ao programa solicitar memória durante a execução, ao invés de definir todas as necessidades de memória durante a compilação. Em C, a alocação dinâmica é essencial para manipular estruturas de dados que podem variar em tamanho, como listas ligadas, vetores dinâmicos, entre outros.

## 2. Funções Básicas

### 2.1. `malloc`

A função `malloc` (memory allocation) aloca um bloco de memória de tamanho especificado (em bytes) e retorna um ponteiro para o início do bloco. Se a alocação falhar, `malloc` retorna `NULL`.
