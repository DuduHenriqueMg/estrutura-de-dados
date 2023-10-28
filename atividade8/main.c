#include <stdio.h>
#include "lista.h"

int main() {
  // Cria uma lista vazia
  No* L = lista_criar();

  // Insere alguns nós na lista
  lista_inserir_inicio(L, 'a');
  lista_inserir_inicio(L, 'b');
  lista_inserir_inicio(L, 'c');

  // Imprime a lista na ordem original
  lista_imprimir(L);

  // Verifica se existe um nó com o valor 'a'
  int existe = lista_verificar_existencia(L, 'a');
  printf("Existe um nó com o valor 'a'? %d\n", existe);

  // Verifica quantas vezes o valor 'a' aparece na lista
  int ocorrencias = lista_verificar_ocorrencias(L, 'a');
  printf("Quantas vezes o valor 'a' aparece na lista? %d\n", ocorrencias);

  // Remove o nó na posição 1
  lista_remover_no_i(L, 1);

  // Imprime a lista na ordem original
  lista_imprimir(L);

  // Remove todos os nós com o valor 'a'
  lista_remover_no(L, 'a');

  // Imprime a lista na ordem original
  lista_imprimir(L);

  return 0;
}
