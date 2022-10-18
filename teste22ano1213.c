#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void respostaT22E1(char *texto) {
	if (strcmp(texto,"aloque dinamicamente a memoria necessaria para este programa funcionar") != 0) {
		printf("Resposta errada. Volte a colocar a frase como estava\n");
		return;
	}
	free(texto);
	printf("A resposta parece correcta. olksascvkdj mdfg\n");
	return;
}

/*
char *fraseeee;
char *obtemFrase() {
    fraseeee=(char *) malloc(20);
    strcpy(fraseeee,"exercicio acerca de");
    return fraseeee;
}

void respostaT22E2(char *frase) {
    if (fraseeee == frase) {
	    printf("%s\n",frase);
    } else {
	    printf("resposta errada\n");
    }
    free(frase);
}
*/
