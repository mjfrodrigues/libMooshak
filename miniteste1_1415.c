#include "miniteste1_1415.h"

int mjfrCharGlobal1415 = 1;

void t11p1FuncaoChamadaDuasVezes(int a, int *b) {
    if (mjfrCharGlobal1415) {
        scanf("%d", b);
        mjfrCharGlobal1415 = 0;
    } else {
        printf("%d\n",a);
    }
}

void t12p1FuncaoChamadaDuasVezes(char *a,  char b) {
    if (mjfrCharGlobal1415) {
        scanf(" %c", a);
        mjfrCharGlobal1415 = 0;
    } else {
        printf("%c\n",b);
    }
}

int *dendo = &mjfrCharGlobal1415; //akward value
int *sor = &mjfrCharGlobal1415; //akward value

int *t1p2escolheNumero(int v[]) {
    int i, j;
    for(i=0;i<10;i++) {
        for(j=0; j<10; j++) {
            if(i!=j && v[i]!=v[j] && v[i]%v[j]==0) {
                dendo = &v[i];
                sor = &v[j];
                return &v[i];
            }
        }
    }
    dendo=NULL;
    sor=NULL;
    return NULL;
}

void t1p2solucao(int *dividendo, int *divisor) {
    if (dividendo == dendo && divisor == sor) {
        printf("t1p2certo sjdhcg ,xzdmb x\n");
    } else {
        printf("resposta errada\n");
    }
}


