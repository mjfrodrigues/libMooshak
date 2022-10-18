//ficheiro mini-teste 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char * oMeuCharGlobal1314 = NULL;

void t1a1SubmeterSolucao1314(char a,char *b) {
  printf("se compila funciona. Leu a letra %c %c\n",a,*b);
}

void t1a2SubmeterSolucao1314(char *a, char *b) {
    if (a == NULL && b == NULL & oMeuCharGlobal1314==NULL)
        printf("resposta certa asdhkjhns dsda\n");
    else if (a == NULL || b == NULL)//não pode estar apenas um a NULL
	printf("resposta errada\n");
    else if (a != oMeuCharGlobal1314 && b != oMeuCharGlobal1314)
	printf("resposta errada\n");
    else if ((*a == *b) && (a != b))
	printf("resposta certa asdhkjhns dsda\n");
    else
        printf("resposta errada\n");
}

char * obtemPrimeiroCharRepetido1314(char *s) {
  int i, j;
  
  for (i = 0; s[i + 1] != '\0'; i++) {
      for (j = i + 1; s[j] != '\0'; j++) {
	  if (s[i] == s[j]) {
	      oMeuCharGlobal1314 = &(s[i]);
	      return oMeuCharGlobal1314;
	  }
      }
  }
  return NULL;
}


char * obtemCharRepetido1314(char *s) {
  int i, j;
  
  for (i = 0; s[i + 1] != '\0'; i++) {
      for (j = i + 1; s[j] != '\0'; j++) {
	  if (s[i] == s[j]) {
	    //srand(time(NULL));
	  //  rand();
	    //rand();
	    if (s[i]=='a')
	        oMeuCharGlobal1314 = &(s[i]);
	    else
	        oMeuCharGlobal1314 = &(s[j]);
	    return oMeuCharGlobal1314;
	  }
      }
  }
  return NULL;
}

