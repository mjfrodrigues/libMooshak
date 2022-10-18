#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SERVIDOR

void respostaT21E1(int *numeros) {
	int i;
	for (i=0; i < 1000; i++) {
		if (numeros[i] != 5*i) {
			printf("Resposta errada. Volte a colocar os numeros como estavam\n");
			return;
		}
	}
	free(numeros);
	numeros = (int *)malloc(1000*sizeof(int));
#ifdef ALUNO
	printf("A resposta parece correta\n");
#endif
#ifdef SERVIDOR
	printf("A resposta parece correta. olksascvkdj mdfg\n");
#endif
	return;
}

void respostaT21E2(int *vector) {
  int i, a;
  for (i = 0; i < 4000000; i++) {
    a = vector[i];
    vector[i]=0;
    vector[i]=a;
  }
  free(vector);
#ifdef ALUNO
	printf("A resposta parece correta\n");
#endif
#ifdef SERVIDOR
	//printf("A resposta parece correta. olksascvkdj mdfg\n");
	printf("aguentou dsda\n");
#endif
  vector = (int *)malloc(4000000*sizeof(int));
}
