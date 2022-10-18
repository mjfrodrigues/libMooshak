#include "t1t1t1.h"
#include <stdio.h>
#include <string.h>

char *verificaADN()
{
	int i;
	inicioErro = NULL;
	scanf("%s", &(myADN[0]));
	for (i = 0; i < strlen(myADN); i++)
	{
		if ((myADN[i] != 'A') && (myADN[i] != 'C') &&	
		    (myADN[i] != 'G') && (myADN[i] != 'T'))
		{
			inicioErro = &(myADN[i]);
			break;
		}
	}
	return inicioErro;
}

void t1t1t1SubmeterSolucao(char *erroIni, char *erroFim)
{
	char *fimErro;
	if (inicioErro != erroIni) printf("INI ERRADO!\n");
	fimErro = inicioErro;
	if (fimErro != NULL)
	{
		while (((*fimErro) != 'A') && ((*fimErro) != 'C') &&
		       ((*fimErro) != 'G') && ((*fimErro) != 'T'))
		   fimErro++;
		fimErro--;
	}
	if (fimErro != erroFim)  printf("FIM ERRADO!\n");
	else printf("TESTE1TURNO1 CERTO sdu\n");
}

