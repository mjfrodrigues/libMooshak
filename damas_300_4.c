#include "damas_300_4.h"
#include <stdio.h>
#include <string.h>

void d3004compoeStrs(char *strin, int init, int end, char *concat)
{
	int i;
	
	for (i = init; i < end; i++)
	{
		concat[i-init] = strin[i];
	}
	concat[i-init] = '\0';
}

char *d3004registerAddress(char *str1, char *str2)
{
	int i;
	char concat[50];
	for (i = 0; i <= strlen(str1) - strlen(str2); i++)
	{
		d3004compoeStrs(str1, i, i + strlen(str2), &(concat[0]));
		if (strcmp(concat, str2) == 0)
		{
			return &(str1[i]);
		}
	}
	return NULL;
}

void d3004submeterSolucao(char *str1, char *str2, char *endereco)
{
	if (endereco == d3004registerAddress(str1, str2))
	{
		printf("endereco confirmado jmysgfcjzsgdx\n");
	}
	else
	{
		printf("resposta errada\n");
	}
}

