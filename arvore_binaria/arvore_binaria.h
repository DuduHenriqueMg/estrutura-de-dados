typedef struct No{
    int valor;
    struct No* no_esquerda;
    struct No* no_direita;
} No;

No* ab_no(int valor);
No* ab_remover_no(No* raiz, int valor);
No* ab_minimo_no(No* no);

void ab_inserir_no(No** raiz, int valor);
void ab_imprimir_pre_ordem(No* raiz);
void ab_imprimir_em_ordem(No* raiz);
void ab_imprimir_pos_ordem(No* raiz);
bool ab_buscar_valor(No* raiz, int valor);
int ab_maximo(No* raiz);
int ab_minimo(No* raiz);
