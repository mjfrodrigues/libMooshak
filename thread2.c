#include <pthread.h>
#include <unistd.h>
#include <stdio.h>

#define __SERVIDOR__

int stateMJFR2 = 0;
int valorResultado = 0;

void startThread2(int *valor)
{
	if (valor != NULL) {
		valorResultado = *valor;
	}
	stateMJFR2 = 1;
	while (stateMJFR2 != 2) {
		usleep(1000);
	}
}


void startThread12(int *valor)
{
	stateMJFR2 = 1;
	while (stateMJFR2 != 2) {
		usleep(1000);
	}
}


void thread2SubmeterSolucao(pthread_t tid)
{
	stateMJFR2 = 2;
	pthread_join(tid, NULL);
#ifdef __ALUNO__
	printf("o resultado parece correcto\n");
#endif
#ifdef __SERVIDOR__
	printf("thread 2 bem terminada %d\n", valorResultado);
#endif
}
