#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char *respostareferencia = NULL;

char *obtemProximaOcorrencia(char *string, char *p)
{
	char *myp;
	myp = p+1;//começar na proxima letra
	while (*myp != '\0')
	{
		if (*myp == *p)
			return myp;
		myp++;
	}
	return NULL;
}


/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * parâmetros:
 *      uma string
 * valor de retorno:
 *      um ponteiro para um caracter da string
 */
char *t1obtemPonteiro(char *string)
{
	int pos;
	srand(time (0));//estabelece a semente do gerador aleatorio
	pos = rand()%(strlen(string));
	respostareferencia = obtemProximaOcorrencia(string,&(string[pos]));
	//pos = (float)((float)rand())*((float)strlen(string)-1)/RAND_MAX;
	//respostareferencia = obtemProximaOcorrencia(string,&(string[(int)pos]));
	return &(string[pos]);
}


/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * parâmetros:
 *      ponteiro - para a próxima ocorrência do caracter
 *                 apontado pelo ponteiro dado
 *                 ou NULL caso não exista outra ocorrência
 */
void t1submeterSolucao(char *ponteiro)
{
	if (ponteiro == respostareferencia)
		printf("isto esta certo e convem colocar muito texto para os alunos nao acertarem na coisa...asdjlkjfdsddddddasd\n");
	else
		printf("\nresposta errada\n\n");
}
