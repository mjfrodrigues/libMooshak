#include "damas_300_3.h"
#include <stdio.h>
#include <string.h>

char *d3003registerAddress(char *strin, char ch)
{
	int i;
	for (i = strlen(strin); i >= 0; i--)
	{
		if (strin[i] == ch)
		{
			return &(strin[i]);
		}
	}
	return NULL;
}

void d3003submeterSolucao(char *s, char ch, char *endereco)
{
	if (endereco == d3003registerAddress(&(s[0]), ch))
	{
		printf("endereco confirmado jmysgfcjzsgdx\n");
	}
	else
	{
		printf("resposta errada\n");
	}
}
