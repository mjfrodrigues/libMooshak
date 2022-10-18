#include <stdio.h>
#include <stdlib.h>

#define SERVIDOR

typedef struct Pessoa {
	int peso;
	float altura;
	char pnome[30];
	char unome[30];
	struct Pessoa *proxima;
} PESSOA;


int listaLigada10x_pess(PESSOA *el) {
#ifdef ALUNO
printf("Conteúdo da lista: pnome\tunome\tpeso\taltura\n");
#endif
	while(el != NULL) {
		printf("%s",el->pnome);
#ifdef SERVIDOR
		putchar('\n');
#endif
#ifdef ALUNO
		putchar('\t');
#endif
		printf("%s",el->unome);
#ifdef SERVIDOR
		putchar('\n');
#endif
#ifdef ALUNO
		putchar('\t');
#endif
		printf("%d",el->peso);
#ifdef SERVIDOR
		putchar('\n');
#endif
#ifdef ALUNO
		putchar('\t');
#endif
		printf("%.2f\n",el->altura);
		el= el->proxima;
	}
	return 0;
}

typedef struct Inteiro {
	int numero;
	struct Inteiro *seguinte;
} INTEIRO;

INTEIRO *obtemListaInteiros() {
	INTEIRO *init,*el;
	int i = 0;

	el=(INTEIRO *)malloc(sizeof(INTEIRO));
	init=el;
	el->numero=i;
	for(i=2;i<31;i+=2) {
		el->seguinte=(INTEIRO *)malloc(sizeof(INTEIRO));
		el=el->seguinte;
		el->numero=i;
	}
	el->seguinte = NULL;
	return init;
}
int listaLigada10x_int(INTEIRO *el) {
#ifdef ALUNO
printf("Conteúdo da lista:\n");
#endif
	while(el != NULL) {
		printf("%d\n",el->numero);
		el= el->seguinte;
	}
	return 0;
}

typedef struct Dados {
    int numero;
    struct Dados *next;
} DADOS;

int listaLigadaDados(DADOS *el) {
#ifdef ALUNO
printf("Conteúdo da lista:\n");
#endif
	while(el != NULL) {
		printf("%d\n",el->numero);
		el= el->next;
	}
	return 0;
}


typedef struct Caracter {
	char caracter;
	struct Caracter *proximo;
} CARACTER;

CARACTER *obtemListaLetras() {
	CARACTER *init, *el;
	char i = 'a';

	el=(CARACTER *)malloc(sizeof(CARACTER));
	init=el;
	el->caracter=i;
	for(i='c';i<='z';i+=2) {
		el->proximo=(CARACTER *)malloc(sizeof(CARACTER));
		el=el->proximo;
		el->caracter=i;
	}
	el->proximo = NULL;
	return init;
}
int listaLigada10x_char(CARACTER *el) {
#ifdef ALUNO
printf("Conteúdo da lista:\n");
#endif
	while(el != NULL) {
		printf("%c\n",el->caracter);
		el= el->proximo;
	}
	return 0;
}

typedef struct Float {
	float numero;
	struct Float *proximo;
} FLOAT;
#define PI 3.141592
FLOAT *obtemListaDecimais() {
	FLOAT *init, *el;
	int i = 0;

	el=(FLOAT *)malloc(sizeof(FLOAT));
	init=el;
	el->numero=(float)i*PI-2.1;
	for(i=2;i<31;i+=2) {
		el->proximo=(FLOAT *)malloc(sizeof(FLOAT));
		el=el->proximo;
		el->numero=(float)i*PI-2.1;
	}
	el->proximo = NULL;
	return init;
}
int listaLigada10x_float(FLOAT *el) {
#ifdef ALUNO
printf("Conteúdo da lista:\n");
#endif
	while(el != NULL) {
		printf("%.2f\n",el->numero);
		el= el->proximo;
	}
	return 0;
}


typedef struct Str {
	char string[50];
	struct Str *proxima;
} STR;
int listaLigada10x_str(STR *el) {
#ifdef ALUNO
printf("Conteúdo da lista:\n");
#endif
	while(el != NULL) {
		printf("%s\n",el->string);
		el= el->proxima;
	}
	return 0;
}

