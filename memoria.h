#ifndef __MEMORIA_H__
#define __MEMORIA_H__

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define MEMO_LEN 8192

void *aloca(int tamanho);
void libera(void *libera);
void imprime_memoria();
bool pode_alocar(int espaco_inicial, int espaco_final);

#endif