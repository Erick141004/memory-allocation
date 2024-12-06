#ifndef __LISTA_H__
#define __LISTA_H__

#include <stdio.h>
#include <stdlib.h>

typedef struct lista
{
    int valor;
    struct lista *prox;
} LISTA;

LISTA* criar_lista(int valor);

void inserir_no(LISTA *l,int valor);
void remover_no(LISTA **l, int valor);
void buscar_no(LISTA *l, int valor);
void imprimir_lista(LISTA *l);
void deletar_lista(LISTA *l);

#endif
