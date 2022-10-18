#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "damas_438_1.h"
/*DAMAS_438_1*/

char *string_original;

char *d4381obtemString(void)
{
	unsigned int ran, i;
	ran = 1 + (int) (1000000.0 * rand() / (RAND_MAX + 1.0));

	string_original = (char *) malloc (ran);
	for (i = 0; i < ran - 1; i++)
	{
		ran = 97 + (int) (26.0 * rand() / (RAND_MAX + 1.0));
		string_original[i] = (char) ran;
	}
	string_original[ran] = '\0';
	return string_original;
}

void d4361verificaSolucao(char *string, char *repetida, int n)
{
        int i;
        char * aux;
	if (strcmp(string, string_original) != 0)
		printf("string alterada!\n");

        if ((aux = (char *) malloc(n*(strlen(string)+1))) == NULL)
        {
                if(repetida == NULL)
                {
                        printf("d4361 correcto sdfsdfs\n");
                } else {
                        printf("Alocada memoria quando no era necessaria\n");
                }
        } else {
                if (sizeof(aux)!=sizeof(repetida))
                        printf("Alocada mais ou menos memoria que a necessaria\n");

                for (i = 1, aux[0] = '\0'; i <= n; i++)
                {
                        strcat(aux,string);
                        if (i != n)
                                strcat(aux, " ");
                }
                if (strcmp(repetida, aux) == 0)
                {
                        printf("d4361 correcto sdfsdfs\n");
                } else {
                        printf("Texto das repetiçoes com erros\n");
                }
                free(repetida);
                free(aux);
        }
	free(string_original);
}

