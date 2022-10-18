#include "damas_300_6.h"
#include <stdio.h>
#include <string.h>

char *d3006endereco;
int d3006registado = 0;
char d3006strDest[50];

void d3006registaStrDestino(char *dest)
{
	d3006endereco = dest;
	d3006registado = 1;
	strcpy(d3006strDest, dest);
}

void d3006submeterSolucao(char *dest)
{
	char str[50];
	strcpy(str, dest);
	str[strlen(d3006strDest)] = '\0';
//printf("%d-%s-%s-%s\n", d3006registado, d3006strDest, dest, str);
	if (!d3006registado) return;
	if (strcmp(d3006strDest, dest) == 0) return;
	if (strcmp(d3006strDest, str) == 0) return;
	if (d3006endereco == dest)
	{
		printf("endereco confirmado jmysgfcjzsgdx\n");
		printf("%s\n", dest);
	}
	else
	{
		printf("resultado errado\n");
	}
}
