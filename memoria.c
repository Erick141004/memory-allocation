#include "memoria.h"

__uint8_t memoria[MEMO_LEN] = {'\0'};

void *aloca(int tamanho){
    if(tamanho <= 0 || tamanho > MEMO_LEN){
        return NULL;
    }
    
    for(int i = 0; i < MEMO_LEN; i++){
        if(memoria[i] != '\0'){
            i += memoria[i];
        }
        else if(!pode_alocar(i, i + tamanho)){
            continue;
        } 
        else{
            memoria[i] = tamanho;
            return &memoria[i + 1];
        }
    }

    return NULL;
}

void libera(void * liberar){
    if(!liberar)
        return;
    
    __uint8_t *valor = (__uint8_t *) liberar; 
    int index = valor - memoria - 1;

    if(index < 0 || index >= MEMO_LEN || memoria[index] == '\0')
        return;

    int tamanho = memoria[index];
    memoria[index] = '\0';

    for(int i = index + 1; i <= index + tamanho; i++){
        memoria[i] = '\0';
    }
}

void imprime_memoria(){
    printf("Estado da memória:\n");
    int espacos_ocupados = 0;
    int espacos_livres = 0;

    for (int i = 0; i < MEMO_LEN; i++) {
        if (memoria[i] != '\0') {
            printf("Endereço %d: Ocupado (Tamanho: %d bytes)\n", i, memoria[i]);
            espacos_ocupados += memoria[i]; 
            i += memoria[i] + 1;
        }
        else {
            espacos_livres++;
        }
    }

    printf("Espaços ocupados: %d bytes\nEspaços livres: %d bytes de %d bytes\n", espacos_ocupados, espacos_livres, MEMO_LEN);
}

bool pode_alocar(int espaco_inicial, int espaco_final){
    for(int i = espaco_inicial; i < espaco_final; i++){
        if(memoria[i] != '\0'){
            return false;
        }
    }

    return true;
}