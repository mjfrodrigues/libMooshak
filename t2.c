#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "t2.h"

#define SERVIDOR
#define MAX_CHARS 50
/*
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

void t2submeterSolucao(char *string, int n, char *resultado)
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
                if (strcmp(resultado, aux) == 0)
                {
#ifdef ALUNO
                        printf("Parece correcto. Submeta o programa\n");
#endif
#ifdef SERVIDOR
			printf("teste correcto ilyusad\n");
#endif
                } else {
                        printf("Texto das repetiçoes com erros\n");
                }
                free(aux);
                free(string_original);
        }
}
*/
