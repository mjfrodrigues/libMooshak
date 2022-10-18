#include <pthread.h>

#ifndef __THREAD_H__
#define __THREAD_H__

typedef struct Aluno {
        char pnome[20];
        char unome[20];
        int dataNascimento;//aaaammdd 
        int nmec;
        char curso[4];
} ALUNO;

typedef struct Turma {  
        int turmaPronta;
        int numeroDeAlunos;
        ALUNO aluno[45];//lotação maxima
} TURMA;


typedef struct Info {
	pthread_t id;//identificador da thread
	int numero;
} INFORMACAO;

void *passaInteiro(int *inteiro);
void *recebeInteiro(int *inteiro);
void *funcaoQueFazCoisas();
void *verificaAluno(ALUNO *aluno);
void *preencheTurma(TURMA *turma);
//void teste4SubmeterSolucao(pthread_t tid);

void thread105SubmeterSolucao(pthread_t tid);
void thread106SubmeterSolucao(INFORMACAO *i);

void startThread(int *valor);
void thread107SubmeterSolucao(pthread_t tid);
void thread108SubmeterSolucao();
void thread109SubmeterSolucao();

#endif
