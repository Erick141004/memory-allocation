#include "lista.h"
#include "memoria.h"

LISTA* criar_lista(int valor){
    LISTA *l = (LISTA *)aloca(sizeof(LISTA));
    l->valor = valor;
    l->prox = NULL; 
    return l;
}

void inserir_no(LISTA *l, int valor){

    if(l->prox != NULL){
        inserir_no(l->prox, valor);
    }
    else{
        LISTA *novo_no = (LISTA *)aloca(sizeof(LISTA));
        novo_no->valor = valor;
        novo_no->prox = NULL; 
        l->prox = novo_no;
    }
    
    return;
}

void remover_no(LISTA **l, int valor){
    LISTA *l_aux_atual = *l;
    LISTA *l_aux_anterior = NULL;

    while(l_aux_atual != NULL){
        if(l_aux_atual->valor == valor){
            if(l_aux_anterior == NULL){
                *l = l_aux_atual->prox;
            } else {
               l_aux_anterior->prox = l_aux_atual->prox;
            }
            libera(l_aux_atual);     
            return;
        }
        l_aux_anterior = l_aux_atual;
        l_aux_atual = l_aux_atual->prox;
    }

    printf("Valor não foi encontrado na lista");
    return;
}

void buscar_no(LISTA *l, int valor){
    LISTA *l_aux = l;

    while (l_aux != NULL)
    {
        if(l_aux->valor == valor){
            printf("Valor encontrado.\n%d esta na lista\n", valor);
            break;
        }
        l_aux = l_aux->prox;
    }

    if(l_aux->prox == NULL)
        printf("Valor não encontrado na lista\n");
    return;
}

void imprimir_lista(LISTA *l){
    LISTA *l_aux = l;
    int no = 1;

    while(l_aux != NULL){
        printf("Nó: %d -> Valor: %d\n", no, l_aux->valor);
        l_aux = l_aux->prox;
        no++;
    }

    return;
}

void deletar_lista(LISTA *l){
    LISTA *l_aux = l;

    while(l_aux != NULL){
        l_aux = l;
        l = l->prox;
        libera(l_aux);
    }
}