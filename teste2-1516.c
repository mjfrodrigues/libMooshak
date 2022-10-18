#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define __SERVIDOR__
//#define __ALUNOS__

void s1516teste2exec1(float *multiplosNeper) {
  int i;
  float *mn = multiplosNeper;  
  for(i = 0; i < 201; i++) {
    if (*multiplosNeper < (i-100)*2.71828-0.001 || *multiplosNeper > (i-100)*2.71828+0.001) {
      printf("\nmultiplosNeper posicao %d tem valor %.5f e devia ter valor %.5f\n\n", i, *multiplosNeper, (i-100)*2.71828);
      break;
    }
    multiplosNeper++;
  }
  free(mn);
#ifdef __SERVIDOR__
  printf("A resposta parece correcta. olksascvkdj mdfg\n");
#endif
  multiplosNeper=(float *)malloc(sizeof(float)*201);
  for (i=-100; i <= 100; i++) {
    multiplosNeper[i+100] = i*2.71828;
  }
}

void s1516teste2exec2(int *numeros) {
        int i;
        for (i=0; i < 4000000; i++) {
                if (numeros[i] != i+1) {
                        printf("Resposta errada. Volte a colocar os numeros como estavam\n");
                        return;
                }
        }
        free(numeros);
        numeros = (int *)malloc(1000*sizeof(int));
#ifdef ALUNO
        printf("A resposta parece correta\n");
#endif
#ifdef __SERVIDOR__
        printf("aguentou dsda\n");
#endif
        return;
}

char *string_original;

char *t2obtemString(void)
{
        unsigned int ran, i;

        string_original = (char *) malloc (51);
        for (i = 0; i < 50; i++)
        {
                ran = 97 + (int) (26.0 * rand() / (RAND_MAX + 1.0));
                string_original[i] = (char) ran;
        }
        string_original[50] = '\0';
        return string_original;
}

void s1516teste2exec3(char *string, int n, char *resultado)
{
        int i;
        char * aux;

        if (strcmp(string, string_original) != 0)
                printf("string alterada!\n");

        if ((aux = (char *) malloc(n*(strlen(string)+1))) == NULL)
        {
                if(resultado == NULL)
                {
#ifdef ALUNO
                        printf("Parece correcto. Submeta o programa\n");
#endif
#ifdef SERVIDOR
                        printf("teste correcto ilyusad\n");
#endif
                } else {
                        printf("Alocada memoria quando nao era necessaria\n");
                }
        } else {
                if (sizeof(aux)!=sizeof(resultado))
                        printf("Alocada mais ou menos memoria que a necessaria\n");

                for (i = 1, aux[0] = '\0'; i <= n; i++)
                {
                        strcat(aux,string);
                        if (i != n)
                                strcat(aux, "|");
                }
//printf("serv %s\n", aux);
//printf("alun %s\n", resultado);
                if (strcmp(resultado, aux) == 0)
                {
#ifdef ALUNO
                        printf("Parece correcto. Submeta o programa\n");
#endif
#ifdef __SERVIDOR__
                        printf("teste correcto ilyusad\n");
#endif
                } else {
                        printf("Texto das repetiçoes com erros\n");
                }
                free(aux);
                free(string_original);
        }
}
