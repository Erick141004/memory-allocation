#include <stdlib.h>
#include <stdio.h>
#include "memoria.h"
#include "lista.h"

int main(void){
    LISTA *l = criar_lista(20);

    imprime_memoria();

    inserir_no(l, 35);
    inserir_no(l, 4);
    inserir_no(l, 10);
    inserir_no(l, 78);

    imprimir_lista(l);
    
    imprime_memoria();

    return 0;
}