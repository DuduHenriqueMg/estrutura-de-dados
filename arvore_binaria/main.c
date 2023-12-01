#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "arvore_binaria.h"


int main(int argc, char* argv[]){

    No* raiz = NULL;

    // Inserindo valores
    ab_inserir_no(&raiz, -3);
    ab_inserir_no(&raiz, -2);
    ab_inserir_no(&raiz, 4);
    ab_inserir_no(&raiz, 8);
    ab_inserir_no(&raiz, 5);
    ab_inserir_no(&raiz, 9);
    ab_inserir_no(&raiz, 3);
    ab_inserir_no(&raiz, 10);
    ab_inserir_no(&raiz, 20);
   
    //Imprimindo valores
    printf("\nImprimindo em pré ordem:");
    ab_imprimir_pre_ordem(raiz);
    printf("\nImprimindo em ordem:");
    ab_imprimir_em_ordem(raiz);
    printf("\nImprimindo em pós ordem:");
    ab_imprimir_pos_ordem(raiz);
    printf("\n");

    //Buscando valores
    ab_buscar_valor(raiz, 11);
    ab_buscar_valor(raiz, 10);
    ab_buscar_valor(raiz, -2);
    ab_buscar_valor(raiz, 20);
    ab_buscar_valor(raiz, 7);
    ab_buscar_valor(raiz, 22);

    //Valor minimo e valor maximo
    printf("\n\nMinimo valor: %d", ab_minimo(raiz));
    printf("\nMaximo valor: %d", ab_maximo(raiz));
    printf("\n");

    //Removendo valores
    raiz = ab_remover_no(raiz, 9);
    raiz = ab_remover_no(raiz, -2);
    raiz = ab_remover_no(raiz, 10);
    raiz = ab_remover_no(raiz, 7);

    //Imprimindo depois da remoção
    printf("\n\nImprimindo depois da remoção: ");
    printf("\nImprimindo em pré ordem:");
    ab_imprimir_pre_ordem(raiz);
    printf("\nImprimindo em ordem:");
    ab_imprimir_em_ordem(raiz);
    printf("\nImprimindo em pós ordem:");
    ab_imprimir_pos_ordem(raiz);
    
    //Valor minimo e valor maximo
    printf("\n\nMinimo valor: %d", ab_minimo(raiz));
    printf("\nMaximo valor: %d", ab_maximo(raiz));
    printf("\n");
    
    
    

    
    
    

    exit(0);
}