#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SERVIDOR

void memoria101(char *texto) {
	if (strcmp(texto,"aloque dinamicamente a memoria necessaria para este programa funcionar") != 0) {
		printf("Resposta errada. Volte a colocar a frase como estava\n");
		return;
	}
	free(texto);
	#ifdef ALUNO
	printf("A resposta parece correcta.\n");
	#endif
	#ifdef SERVIDOR
	printf("A resposta parece correcta. olksascvkdj mdfg\n");
	#endif	
	return;
}

void memoria102(int *numeros) {
	int i;
	for (i=0; i < 1000; i++) {
		if (numeros[i] != 5*i) {
			printf("Resposta errada. Volte a colocar os numeros como estavam\n");
			return;
		}
	}
	free(numeros);
	numeros = (int *) malloc(1000*sizeof(int));
	#ifdef ALUNO
	printf("A resposta parece correcta.\n");
	#endif
	#ifdef SERVIDOR
	printf("A resposta parece correcta. olksascvkdj mdfg\n");
	#endif
	return;
}

void memoria103(float *multiplos_pi) {
	int i;

	for (i=0; i < 256; i++) {
		if ((multiplos_pi[i] < i*3.141592 -0.01) || (multiplos_pi[i] > i*3.141592 +0.01)) {
			printf("Resposta errada. Volte a colocar os numeros como estavam\n");
			return;
		}
	}
	free(multiplos_pi);
	#ifdef ALUNO
	printf("A resposta parece correcta.\n");
	#endif
	#ifdef SERVIDOR
	printf("A resposta parece correcta. olksascvkdj mdfg\n");
	#endif
	return;
}

void memoria104(int *zeros) {
  int i;
  for(i=0; i < 1000000; i++) {
    if(zeros[i] != 0) {
      printf("Resposta errada. Encontrado um numero diferente de zero\n");
      return;
    }
  }
  free(zeros);
  #ifdef ALUNO
  printf("A resposta parece correcta.\n");
  #endif
  #ifdef SERVIDOR
  printf("A resposta parece correcta. olksascvkdj mdfg\n");
  #endif
  return;
}

char *fraseeee;
char *obtemFrase() {
  char *frase;
  #ifdef ALUNO
  frase = (char *) malloc(28*sizeof(char));
  #endif
  #ifdef SERVIDOR
  frase = (char *) malloc(20*sizeof(char));
  fraseeee=frase;
  #endif
  
  #ifdef ALUNO
  strcpy(frase, "Uma frase muito informativa");
  #endif
  #ifdef SERVIDOR
  strcpy(frase, "exercicio acerca de");
  #endif 
  return frase;
}

void memoria105(char *frase) {
    if (fraseeee == frase) {
  	printf("%s\n", frase);
  	free(frase);//ver se era alocada
        frase = (char *) malloc(1000*sizeof(char));
    }
}
