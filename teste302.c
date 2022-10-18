#include <stdio.h>

typedef struct Elemento {
    int numero;
    struct Elemento *next;
} ELEMENTO;

teste302(ELEMENTO *el) {
  if(el->numero == 1)
    printf("bublle\nds\nok\n");
  else {
    while(el!=NULL) {
      printf("%d\n",el->numero);
      el = el->next;
    }
  }
}
