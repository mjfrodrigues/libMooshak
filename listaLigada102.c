#include <stdio.h>

typedef struct Elemento {
    char letra;
    struct Elemento *proximo;
} ELEMENTO;

listaLigada102(ELEMENTO *el) {
    printf("inserido rxpt %c\n",el->letra);
    return 0;
}

