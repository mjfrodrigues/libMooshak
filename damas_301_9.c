#include "damas_301_9.h"
#include <stdio.h>
#include <string.h>

void d3019submeterSolucao(char *s1, char *s2, char *resultado)
{
	char str[500], buff[100];
	int i;
	
	str[0] = '\0';
	for (i = 0; i < strlen(s1); i++)
	{
		strcpy(buff, &(s1[i]));//seleccionar parte de s1
		buff[strlen(s2)] = '\0';
		if (strcmp(buff, s2) == 0)
		{
			strcat(str, &(s1[i + strlen(s2)]));
			break;
		}
		else
		{
			str[i] = s1[i];
			str[i+1] = '\0';
		}
	}
	if (strcmp(str,resultado) == 0)
//MUDAR. ESTÁ ERRADO. AO MUDAR É NECESSÁRIO MUDAR OS FICHEIROS NO MOOSHAK
		printf("d3018 correcto\n");
	else
		printf("d3018 ERRADO\n");
}
