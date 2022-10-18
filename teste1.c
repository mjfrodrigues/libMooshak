#include <stdio.h>


void t1e1(char x, char *y, char *z) {
	printf("resolvido lkfjds\n");
}


void t1e2(char *string, char *endereco) {
	char *e=NULL;

	e=string;
	while ((*e)!='\0' && (*e)!='\n') {
		if ((*e) == 'm') {
			if(e==endereco) {
				printf("resolvido dakjsfh\n");
				return;
			} else {
				printf("resposta errada\n");
				return;
			}
		}
		e++;
	}
	if (endereco==NULL) {
		printf("resolvido dakjsfh\n");
	} else {
		printf("resposta errada\n");
	}
}
