#include <stdlib.h>
#include <stdio.h>
#include "lista.h"


No* lista_criar() {
  return NULL;
}

void lista_inserir_inicio(No* L, char valor) {
  No* novo = (No*)malloc(sizeof(No));
  novo->valor = valor;
  novo->proximo = L;
  L = novo;
}

void lista_imprimir(No* L) {
  if (L == NULL) {
    printf("Lista vazia.\n");
    return;
  }

  while (L != NULL) {
    printf("%c ", L->valor);
    L = L->proximo;
  }

  printf("\n");
}

int lista_verificar_existencia(No* L, char valor_busca) {
  while (L != NULL) {
    if (L->valor == valor_busca) {
      return 1;
    }
    L = L->proximo;
  }

  return 0;
}

int lista_verificar_ocorrencias(No* L, char valor_busca) {
  int ocorrencias = 0;

  while (L != NULL) {
    if (L->valor == valor_busca) {
      ocorrencias++;
    }
    L = L->proximo;
  }

  return ocorrencias;
}