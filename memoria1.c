#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SERVIDOR

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * parâmetros:
 *      resultado - o vector de caracteres com as N string
 */
void m1submeterSolucao(char *resultado) {
  char *c = resultado;
#ifdef SERVIDOR
  printf("Alocacao de memoria 1\n");
#endif
  while (*c != '\0') {
#ifdef SERVIDOR
    if (*c == ' ')
      putchar('\n');
    else
#endif
      putchar(*c);
    c++;
  }
  putchar('\n');
}
