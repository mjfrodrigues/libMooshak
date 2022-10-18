#include <pthread.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "thread.h"

#define __SERVIDOR__

//static pthread_t theTID = 0;
pthread_t theTID = 0;

void *passaInteiro(int *inteiro)
{
	theTID = pthread_self();
#ifdef __ALUNO__
	printf("O inteiro obtido foi ");
#endif
	printf("%d\n", *inteiro);
	while(1) {
    usleep(10000);
  }
}

void *recebeInteiro(int *inteiro)
{
	theTID = pthread_self();
#ifdef __ALUNO__
	srand(time(NULL));
	rand();rand();
	*inteiro = rand()%2000000-1000000;
	printf("O inteiro enviado foi %d\n", *inteiro);
#endif
#ifdef __SERVIDOR__
	scanf("%d", inteiro);
#endif
	while(1) {
        usleep(10000);
  }
}

void *funcaoQueFazCoisas(){
	theTID = pthread_self();
	while(1) {
		usleep(10000);
	}
} 

void *verificaAluno(ALUNO *aluno) {
  int i;
  theTID = pthread_self();
#ifdef __ALUNO__
  printf("Foram recebidos os seguintes alunos:\n");
#endif
  for(i=0; i<3;i++) {
#ifdef __ALUNO__
    printf("  aluno %d: %s %s %d %d %s\n", i+1, aluno[i].pnome, aluno[i].unome,
	   aluno[i].dataNascimento, aluno[i].nmec, aluno[i].curso);
#endif
#ifdef __SERVIDOR__
    printf("%s+%s+%d+%d+%s\n", aluno[i].pnome, aluno[i].unome,
	   aluno[i].dataNascimento, aluno[i].nmec, aluno[i].curso);
#endif
  }
  while(1) {
    usleep(10000);
  }
}

void *preencheTurma(TURMA *turma) {
  int i;
  turma->turmaPronta = 0;

#ifdef __ALUNO__
  printf("\nQuantos alunos quer na turma? ");
#endif
  scanf("%d", &(turma->numeroDeAlunos));

  for(i=0; i < turma->numeroDeAlunos; i++) {
#ifdef __ALUNO__
  printf("  Escreva os dados do aluno %d (pnome unome dataNascimento nmec curso): ",i+1);
#endif
    scanf("%s %s %d %d %s", turma->aluno[i].pnome, turma->aluno[i].unome,
	   &(turma->aluno[i].dataNascimento), &(turma->aluno[i].nmec),
	  turma->aluno[i].curso);
  }
  turma->turmaPronta = 1;
  while(1) {
    usleep(10000);
  }
}

void thread105SubmeterSolucao(pthread_t tid)
{
	usleep(10000);
//	printf("thread 2 bem terminada 1654\n");
	pthread_cancel(tid);
	pthread_join(tid, NULL);
#ifdef __ALUNO__
	printf("o resultado parece correcto\n");
#endif
#ifdef __SERVIDOR__
	printf("o resultado parece correcto\n");
	//printf("thread bem cancelada\n");
#endif

}

void thread106SubmeterSolucao(INFORMACAO *i)
{
	usleep(10000);
//	printf("thread 2 bem terminada 1654\n");
	pthread_cancel(i->id);
	pthread_join(i->id, NULL);
#ifdef __ALUNO__
	printf("o resultado parece correcto\n");
#endif
#ifdef __SERVIDOR__
	printf("o resultado parece correcto %d\n", i->numero);
	//printf("thread bem cancelada\n");
#endif

}
void thread107SubmeterSolucao(pthread_t tid)
{
	usleep(10000);
//	printf("thread 2 bem terminada 1654\n");
	pthread_cancel(tid);
	pthread_join(tid, NULL);
#ifdef __ALUNO__
	printf("o resultado parece correcto\n");
#endif
#ifdef __SERVIDOR__
	printf("thread bem cancelada\n");
#endif

}

void thread108SubmeterSolucao()
{
	usleep(10000);
//	printf("thread 2 bem terminada 1654\n");
	pthread_join(theTID, NULL);
#ifdef __ALUNO__
	printf("o resultado parece correcto\n");
#endif
#ifdef __SERVIDOR__
	printf("funcaoquefazcoisas foi cancelada\n");
	//printf("thread bem cancelada\n");
#endif

}

void thread109SubmeterSolucao()
{
	usleep(10000);
//	printf("thread 2 bem terminada 1654\n");
	pthread_join(theTID, NULL);
#ifdef __ALUNO__
	printf("o resultado parece correcto\n");
#endif
#ifdef __SERVIDOR__
	printf("O+programa+terminou\n");
	//printf("thread bem cancelada\n");
#endif

}

