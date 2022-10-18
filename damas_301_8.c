#include "damas_301_8.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void d3018submeterSolucao(char *original, char *semMaiusculas)
{
	char str[5000], *pstr, *porig;

	pstr = &(str[0]);
	porig = &(original[0]);
	while (*porig != '\0')
	{
		if (!isupper(*porig))
		{
			(*pstr) = (*porig);
			pstr++;
		}
		porig++;
	}
	(*pstr) = '\0';
	if (strcmp(str,semMaiusculas) == 0)
		printf("d3018 correcto\n");
	else
		printf("d3018 ERRADO\n");
}
