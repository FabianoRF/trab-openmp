#include <stdio.h>
#include <stdlib.h>

#define m 10

struct filaElementos
{
	int comeco, fim;
	int elementos[m];
};

void iniciarFila(struct filaElementos *fila)
{
	fila->comeco = 0;
	fila->fim =  -1;
}

void inserir(struct filaElementos *fila, int x)
{
	if(fila->fim == m - 1)
		printf("Fila está lotada, aguarde... \n");
	else
	{
		fila->fim++;
		fila->elementos[fila->fim] = x;
	}
}
void consultar(struct filaElementos *fila)
{
    	int i = 0;
    	if(fila->fim < fila->comeco)
		printf("fila Vazia \n");
	else
	{
    		while(i < m)
		{
			printf(" Listando todos os elementos x =  %d \n", fila->elementos[i]);
			i++;
		}
	}
}

void consultarComecoFila(struct filaElementos *fila)
{
    int i = 0;
	printf("Lista o primeiro elemento da fila : %d \n", fila->elementos[fila->comeco]);
}

void remover(struct filaElementos *fila){
	if(fila->fim < fila->comeco)
		printf("fila Vazia\n");
	else
		fila->comeco++;
}
void esvaziar(struct filaElementos *fila){
	if(fila->fim < fila->comeco)
		printf("fila Vazia\n");
	else
	{
		int i;
		for (i = 0; i < m; ++i)
		{
			fila->fim--;
		}
	}
}
int main()
{
	int i;
	struct filaElementos fila;
	int x;
	iniciarFila(&fila);
	for(i = 0; i < m; i++)
	{		
		printf("Informe numero para o elemento x =  \n");
		scanf("%d", &x);
		inserir(&fila, x);
	}
	//remover(&fila);
	consultar(&fila);
	esvaziar(&fila);
	consultar(&fila);
	//consultarComecoFila(&fila);
	return 0;
}