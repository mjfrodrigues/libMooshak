//ficheiro mini-teste 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void t1a1SubmeterSolucao1213(char a,char *b,char *c) {
  printf("fsdfsmmmmn sdfj kjfd\n");
}

int * apontaPara (int v[]) {
  int i;
  
  /* No servidor queremos controlar o valor
   * srand(time(NULL));
   * rand();
   * rand();
   * i = rand()%10;
   */
  i = v[3];
  
  return &(v[i]);
}
