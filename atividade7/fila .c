#include <stdlib.h>
#include "fila.h"

struct fila {
    int inicio, fim, total;
    int v[50];
};

Fila* cria_fila() {
    Fila* f = (Fila*) malloc(sizeof(Fila));
    f->inicio = 0;
    f->fim = 0;
    f->total = 0;
    return f;
}

void insere(Fila* f, int v) {
    if(f->total == 50) {
        printf("Capacidade da fila estourou.\n");
        exit(1);
    }
    f->v[f->fim] = v;
    f->fim = (f->fim + 1) % 50;
    f->total++;
}

int retira(Fila* f) {
    if(fila_vazia(f)) {
        printf("Fila vazia.\n");
        exit(1);
    }
    int v = f->v[f->inicio];
    f->inicio = (f->inicio + 1) % 50;
    f->total--;
    return v;
}

int fila_vazia(Fila* f) {
    return (f->total == 0);
}

void libera_fila(Fila* f) {
    free(f);
}