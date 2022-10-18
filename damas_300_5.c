#include "damas_300_5.h"
#include <stdio.h>
#include <string.h>

void d3005submeterSolucao(char *s, char *endereco)
{
	int i;
	char *address;
	
	for (i = 0; i < strlen(s); i++)
	{
		if ((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i') ||
		    (s[i] == 'o') || (s[i] == 'u') || (s[i] == 'A') ||
		    (s[i] == 'E') || (s[i] == 'I') || (s[i] == 'O') ||
		    (s[i] == 'U'))
		{
			if (endereco == &(s[i]))
			{
				printf("d3005 correcto\n");
				return;
			}
			else
			{
				printf("d3005 ERRADO\n");
				return;
			}
		}
	}
	if (endereco != NULL)
		printf("d3005 ERRADO\n");
	printf("d3005 correcto\n");
        return;
}
