typedef struct fila Fila;

Fila* fila();
void insere(Fila* f, int v);
int retira(Fila* f);
int fila_vazia(Fila* f);
void libera_fila(Fila* f);