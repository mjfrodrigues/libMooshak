#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SERVIDOR

typedef struct Inteiro {
	int numero;
	struct Inteiro *seguinte;
} INTEIRO;

INTEIRO *listaInteiros() {
	INTEIRO *init,*el;
	int i = 0, qtd;

	el=(INTEIRO *)malloc(sizeof(INTEIRO));
	init=el;
#ifdef SERVIDOR
	scanf("%d", &(el->numero));
	for(i=1;i<20;i++) {
		el->seguinte=(INTEIRO *)malloc(sizeof(INTEIRO));
		el=el->seguinte;
		scanf("%d", &(el->numero));
	}
#endif
#ifdef ALUNO
	srand(time(NULL));
	qtd=rand()%50+1;
	el->numero = rand()%1000000;
	for(i=1;i<qtd;i++) {
		el->seguinte=(INTEIRO *)malloc(sizeof(INTEIRO));
		el=el->seguinte;
		el->numero = rand()%1000000;
	}
#endif
	el->seguinte = NULL;
	return init;
}


void t2p3a(INTEIRO *lista) {
#ifdef SERVIDOR
	while(lista != NULL) {
		printf("%d\n", lista->numero);
		lista=lista->seguinte;
	}
#endif
#ifdef aluno
	printf("Sem testes locais. Submeta ao Mooshak\n");
#endif
}

void t2p3b(INTEIRO *lista) {
#ifdef SERVIDOR
	while(lista != NULL) {
		printf("%d\n", lista->numero);
		lista=lista->seguinte;
	}
#endif
#ifdef aluno
	printf("Sem testes locais. Submeta ao Mooshak\n");
#endif
}
