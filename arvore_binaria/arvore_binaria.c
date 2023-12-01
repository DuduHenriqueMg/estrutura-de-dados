#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "arvore_binaria.h"

No* ab_no(int valor){
    No* no = malloc(sizeof(No));
    no->valor = valor;
    no->no_esquerda = NULL;
    no->no_direita = NULL;
    return no;
}

void ab_inserir_no(No** raiz, int valor){

    if(*raiz == NULL){
        *raiz = ab_no(valor);
    }
    else{
        if((*raiz)->valor >= valor){
            ab_inserir_no(&(*raiz)->no_esquerda, valor);
        }
        else if((*raiz)->valor < valor){
            ab_inserir_no(&(*raiz)->no_direita, valor);
        }
    }
}

No* ab_remover_no(No* raiz, int valor) {

    if (raiz == NULL) {
        return NULL;
    } else if (valor < raiz->valor) {
        raiz->no_esquerda = ab_remover_no(raiz->no_esquerda, valor);
    } else if (valor > raiz->valor) {
        raiz->no_direita = ab_remover_no(raiz->no_direita, valor);
    } else {
        if (raiz->no_esquerda == NULL && raiz->no_direita == NULL) {
            free(raiz);
            raiz = NULL;
        } else if (raiz->no_esquerda == NULL) {
            No* temp = raiz;
            raiz = raiz->no_direita;
            free(temp);
        } else if (raiz->no_direita == NULL) {
            No* temp = raiz;
            raiz = raiz->no_esquerda;
            free(temp);
        } else {
            No* temp = ab_minimo_no(raiz->no_direita);
            raiz->valor = temp->valor;
            raiz->no_direita = ab_remover_no(raiz->no_direita, temp->valor);
        }
    }
    return raiz;
}

No* ab_minimo_no(No* no) {
    while (no && no->no_esquerda != NULL){
        no = no->no_esquerda;
    }
        
    return no;
}

bool ab_buscar_valor(No* raiz, int valor){

    if(raiz == NULL ){
        printf("\nBusca - Valor nao encontrado: %d", valor);
        return false;
    }

    if(raiz->valor == valor){
        printf("\nBusca - O valor foi encontrado: %d", raiz->valor);
        return true;
    }
    
    if(raiz->valor > valor){
        ab_buscar_valor(raiz->no_esquerda, valor);    
    } else {
        ab_buscar_valor(raiz->no_direita, valor);
    }
}

void ab_imprimir_pre_ordem(No* raiz){
    if(raiz != NULL){

        printf("%d ", raiz->valor);
        ab_imprimir_em_ordem(raiz->no_esquerda);
        ab_imprimir_em_ordem(raiz->no_direita);
        
    }
}    

void ab_imprimir_em_ordem(No* raiz){
    if(raiz != NULL){
        ab_imprimir_em_ordem(raiz->no_esquerda);
        printf("%d ", raiz->valor);
        ab_imprimir_em_ordem(raiz->no_direita);
    }
}

void ab_imprimir_pos_ordem(No* raiz){
    if(raiz != NULL){
        ab_imprimir_em_ordem(raiz->no_esquerda);
        ab_imprimir_em_ordem(raiz->no_direita);
        printf("%d ", raiz->valor);
    }
}

int ab_minimo(No* raiz){
    
    if(raiz != NULL ){
        if (raiz->no_esquerda != NULL){
            return ab_minimo(raiz->no_esquerda);
        }
        
        return(raiz->valor);
    }
};

int ab_maximo(No* raiz){

    if(raiz != NULL ){
        if (raiz->no_direita != NULL){
            return ab_maximo(raiz->no_direita);
        }
    
        return(raiz->valor);
    }      
};