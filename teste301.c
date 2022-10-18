#include <stdio.h>

typedef struct Elemento {
    int numero1;
    float numero2;
    struct Elemento *next;
} ELEMENTO;

teste301(ELEMENTO *el) {
    printf("inserido rxpt %d %.2f\n",el->numero1,el->numero2);
}
