#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int mjfrVetorInteiros[100];
int *mjfrEndZero = NULL;
float mjfrVetorFloats[100];
float*mjfrEndMax = NULL;


void ponteiros101(int *a, int b) {
  printf("doneForNow\n");
}

void ponteiros102(char a, char *b, char *c) {
  printf("doneForNow\n");
}

void ponteiros103(char a, char *b, char *c) {
  printf("doneForNow\n");
}

void ponteiros104(float *a, double b, float c, double *d) {
  printf("doneForNow\n");
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * *
 * função: obtemPonteiroParaVetorInts()
 * parâmetros: não tem.
 * retorno: um apontador para um elemento de um vetor
 *          de inteiros ordenado por ordem crescente
 */
int *obtemPonteiroParaVetorInts() {
  int i, offset;
  
  srand(time(NULL));
  
  offset = rand()%100;
  
  for (i=0;i<100;i++) {
    mjfrVetorInteiros[i] = i - offset;
    if (i == offset) {
      mjfrEndZero = &mjfrVetorInteiros[i];
    }
  }
  return &mjfrVetorInteiros[rand()%100];
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * *
 * função: enderecoZero()
 * parâmetros:
 *      *ez - apontador para o elemento zero
 * retorno: não tem.
 */
void enderecoZero(int *ez) {
  if (ez == mjfrEndZero) {
    printf("resposta correta\n");
  } else {
    printf("erradaddddaaaaaaaaaa\n");
  }
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * *
 * função: obtemPonteiroParaVetorFloats()
 * parâmetros: não tem.
 * retorno: um apontador para um elemento de um vetor
 *          de floats que representa a função seno
 */
float *obtemPonteiroParaVetorFloats() {
  int i, offset;
  float max = -2;
  
  srand(time(NULL));
  
  offset = rand()%100;
  
  for (i=0;i<100;i++) {
    mjfrVetorFloats[i] = sinf(3.1415962/50*(i-offset));
    if (max < mjfrVetorFloats[i]) {
      max = mjfrVetorFloats[i];
      mjfrEndMax = &mjfrVetorFloats[i];
    }
  }
  return &mjfrVetorFloats[rand()%98+1];
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * *
 * função: enderecoMax()
 * parâmetros:
 *      *em - apontador para o elemento de maior valor
 * retorno: não tem.
 */
void enderecoMax(float *em) {
  if (em == mjfrEndMax) {
    printf("resposta correta\n");
  } else {
    printf("erradaddddaaaaaaaaaa\n");
  }
}