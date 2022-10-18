#include <stdio.h>

typedef struct Elemento {
    int numero;
    struct Elemento *proximo;
} ELEMENTO;

listaLigada101(ELEMENTO *el) {
    printf("inserido rxpt %d\n",el->numero);
    return 0;
}
