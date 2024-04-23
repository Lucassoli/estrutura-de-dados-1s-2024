#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

No *lista_criar() {
    return NULL;
}

void lista_destruir(No *L) {
    while (L) {
        No *temp = L;
        L = L->prox;
        free(temp);
    }
}

void lista_inserir(No **L, char valor) {
    No *novo = (No *)malloc(sizeof(No));
    novo->valor = valor;
    novo->prox = *L;
    *L = novo;
}

void lista_imprimir(No *L) {
    while (L) {
        printf("%c ", L->valor);
        L = L->prox;
    }
    printf("\n");
}

int lista_verificar_existencia(No *L, char valor_busca) {
    while (L) {
        if (L->valor == valor_busca)
            return 1;
        L = L->prox;
    }
    return 0;
}

int lista_verificar_ocorrencias(No *L, char valor_busca) {
    int count = 0;
    while (L) {
        if (L->valor == valor_busca)
            count++;
        L = L->prox;
    }
    return count;
}

void imprimir_aux(No *L) {
    if (!L)
        return;
    imprimir_aux(L->prox);
    printf("%c ", L->valor);
}

void lista_imprimir_inversa(No *L) {
    imprimir_aux(L);
    printf("\n");
}

void lista_inserir_no_i(No **L, char valor, int i) {
    No *novo = (No *)malloc(sizeof(No)), *aux = *L;
    novo->valor = valor;
    if (i == 0) {
        novo->prox = *L;
        *L = novo;
    } else {
        while (--i && aux) aux = aux->prox;
        if (aux) {
            novo->prox = aux->prox;
            aux->prox = novo;
        } else {
            free(novo);
        }
    }
}

void lista_remover_no_i(No **L, int i) {
    No *atual = *L, *anterior = NULL;
    while (i-- && atual) {
        anterior = atual;
        atual = atual->prox;
    }
    if (atual) {
        if (anterior) {
            anterior->prox = atual->prox;
        } else {
            *L = atual->prox;
        }
        free(atual);
    }
}

void lista_remover_no(No **L, char valor_busca) {
    No *atual = *L, *anterior = NULL;
    while (atual) {
        if (atual->valor == valor_busca) {
            if (anterior) {
                anterior->prox = atual->prox;
            } else {
                *L = atual->prox;
            }
            No *temp = atual;
            atual = atual->prox;
            free(temp);
        } else {
            anterior = atual;
            atual = atual->prox;
        }
    }
}
