#include <stdio.h>

typedef struct Elemento {
    char palavra[30];
    struct Elemento *next;
} ELEMENTO;

listaLigada104(ELEMENTO *el) {
    printf("inserido rxpt %s\n",el->palavra);
    el=el->next;
    printf("%s\n",el->palavra);
    return 0;
}


