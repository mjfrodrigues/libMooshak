#include <stdio.h>

typedef struct Elemento {
    char nome[21];
    struct Elemento *proximo;
} ELEMENTO;

listaLigada103(ELEMENTO *el) {
    printf("inserido rxpt %s\n",el->nome);
    return 0;
}


