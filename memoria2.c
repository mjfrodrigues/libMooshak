#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SERVIDOR

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * parâmetros:
 *      resultado - o vector de caracteres com as N string
 */
void m2submeterSolucao(int *resultado) {
  int i;
#ifdef SERVIDOR
  printf("memoria alocada correctamente");
#endif
  for (i=0;resultado[i] != 0;i++) {
  #ifdef SERVIDOR
      printf(" %d", resultado[i]);
  #endif
#ifdef ALUNO
      printf("%d\n", resultado[i]);
  #endif
  }
  #ifdef SERVIDOR
  printf(" ");
  #endif
   printf("0\n");
}
