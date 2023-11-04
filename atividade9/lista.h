#include <stdlib.h>

typedef struct No {
  char valor;
  struct No* proximo;
} No;

No* lista_criar();
void lista_inserir_inicio(No* L, char valor);
void lista_imprimir(No* L);
void lista_inserir_no_ordenado(No* L, No* no);
int lista_verificar_existencia(No* L, char valor_busca);
int lista_verificar_ocorrencias(No* L, char valor_busca);