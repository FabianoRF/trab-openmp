#include <stdio.h>
#include <stdlib.h>

#define m 100

typedef struct Item {
    char linha[1000];
} item;

struct filaElementos
{
    int comeco, fim;
    item elementos[m];
};

void iniciarFila(struct filaElementos *fila)
{
    fila->comeco = 0;
    fila->fim =  -1;
}

void inserir(struct filaElementos *fila, item palavra)
{
    if(fila->fim == m - 1)
        printf("Fila est� lotada, aguarde... \n");
    else
    {
        fila->fim++;
        fila->elementos[fila->fim] = palavra;
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
            printf(" Listando todos os elementos x =  %s \n", fila->elementos[i].linha);
            i++;
        }
    }
}

void consultarComecoFila(struct filaElementos *fila)
{
    int i = 0;
    printf("Lista o primeiro elemento da fila : %s \n", fila->elementos[fila->comeco].linha);
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
void leArquivo(char nomeArquivo[100], struct filaElementos *fila){
  FILE *arq;
  char Linha[m];
  char *result;
  int i, j;
  item palavra;
  // Abre um arquivo TEXTO para LEITURA
  arq = fopen(nomeArquivo, "rt");
  if (arq == NULL)  // Se houve erro na abertura
  {
     printf("Problemas na abertura do arquivo\n");
     return;
  }
  i = 1;
  while (!feof(arq))
  {
	// L� uma linha (inclusive com o '\n')
      result = fgets(Linha, 100, arq);  // o 'fgets' l� at� 99 caracteres ou at� o '\n'
      if (result)  // Se foi poss�vel ler
	  printf("\nLinha %d : %s",i,Linha);
	  for(j = 0; j < strlen(Linha); j++){
	  	palavra.linha[j] = Linha[j];
	  }
	  inserir(fila, palavra);
      i++;
  }
  consultar(fila);
  //printf("i: %d /fim: %d", i, &fila->fim);
  fclose(arq);
}

