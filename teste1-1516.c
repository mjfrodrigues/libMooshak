#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define __SERVIDOR__
//#define __ALUNOS__

void teste1exec1_1516(char a, char *b, char *c) {
  printf("doneForNow\n");
}

void teste1exec2(int vetor[], int numero, int *endereco) {
  int i, *p = NULL, done = 0;
  
  for(i = 0; i < 10; i++) {
#ifdef __SERVIDOR__
    printf("%d\n", vetor[i]);
#endif
    if (!done && vetor[i] == numero) {
      p = &vetor[i];
      done = 1;
    }
  }
#ifdef __SERVIDOR__
  printf("%d\n", numero);
#endif
  if (p == endereco) {
    printf("resposta correta\n");
#ifdef __SERVIDOR__
    printf("sdkanxc,sdjk\n");
#endif
  }
}

char *mjfrMyWAddress = NULL;
char mjfrMyTexto[1000];
char mjfrMyLetra;

char *ondeEstaLetraW() {
  int i;
#ifdef __ALUNOS__
  mjfrMyTexto[0]=' ';
  mjfrMyTexto[8]=' ';
  mjfrMyTexto[9]='\0';
  printf("Insira 7 letras sem espaços em branco: ");
  for(i=1; i < 8; i++)
    scanf(" %c",&mjfrMyTexto[10]);

  for(i=1; i < 8; i++)
    if (mjfrMyTexto[i] == 'W')
      mjfrMyWAddress = &mjfrMyTexto[i];
  
  srand(time(NULL));
  rand();rand();
  return &mjfrMyTexto[rand()%6+1];
#endif
#ifdef __SERVIDOR__
  scanf("%s", mjfrMyTexto);
  scanf(" %c", &mjfrMyLetra);
  mjfrMyTexto[0]=' ';
  mjfrMyTexto[strlen(mjfrMyTexto)]=' ';
  for(i=0; i < strlen(mjfrMyTexto); i++)
    if (mjfrMyTexto[i] == 'W')
      mjfrMyWAddress = &mjfrMyTexto[i];
  for(i=0; i < strlen(mjfrMyTexto); i++)
    if (mjfrMyTexto[i] == mjfrMyLetra)
      return &mjfrMyTexto[i];
#endif
}

void enderecoW(char *endereco) {
#ifdef __SERVIDOR__
  printf("%s\n", mjfrMyTexto);
  printf("%c\n", mjfrMyLetra);
#endif
  if (endereco == mjfrMyWAddress)
    printf("resposta correta\n");
#ifdef __SERVIDOR__
  printf("dsadsadsad\n");
#endif
  return;
}
