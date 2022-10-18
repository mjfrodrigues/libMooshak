#include<stdio.h>
#include<stdlib.h>

void teste201(char *mensagem) {
	printf("%s\n", mensagem);
	free(mensagem);
	printf("libertou bem a memoria\n");
}

void teste202(int n, int *mem) {
	int i;
	if (n!=43) {
		printf("%d\n",n);
		for(i=0;i<n;i++) {
			if (mem[i]!=i+1) {
				printf("Erro: mem[%d]=%d e deveria ser mem[%d]=%d\n",i,mem[i],i,i+1);
				break;
			}
		}
	}
	free(mem);
	printf("ok\n");
}
