#include <pthread.h>
#include <unistd.h>
#include <stdio.h>

#define __SERVIDOR__

int stateMJFR1 = 0;

void startThread1()
{
	stateMJFR1 = 1;
	while (stateMJFR1 != 2);
	usleep(1000);
}

void thread1SubmeterSolucao(pthread_t tid)
{
	stateMJFR1 = 2;
	pthread_join(tid, NULL);
#ifdef __ALUNO__
	printf("o resultado parece correcto\n");
#endif
#ifdef __SERVIDOR__
	printf("thread 1 bem terminada\n");
#endif
}
