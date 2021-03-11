#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include <conio.h>
//biblioteca OpenMP
#include <omp.h>

#include "filaLeitura.h"
// le e adicionar na fila(Produtor) - Carlos paizao onzao
// Gerenciar threads(arquiteto) - Lucas
// Fazer as funcs do Consumidor - Fabiano

//funcao ola
void ola();

void produtor() {
  // usar diretiva single (slide fran)
  // le e adiciona as linhas na fila

}


void consumidor() {
  // pega uma linha na fila
  // transforma em minuscula
  // conta as palavras
  
}


void init() { 
  int numeroDaThread = omp_get_thread_num();

  if(numeroDaThread == 1) {
    // chama a função produtor

    
  } else {
    //chama os consumidores
  }

  // exibe no final

}

// le o caminho do arquivo e a palavra
int main(){
	int numeroDeThreads = 3;
	char enderecoArquivo[100];

	//#pragma omp parallel num_threads(omp_get_thread_num())
	//init();
	
	int i;
	struct filaElementos fila;
	char x[1000];
	iniciarFila(&fila);
	printf("Digite o endereco do arquivo: \n");
	fflush(stdin);
	scanf("%s", enderecoArquivo);
	leArquivo(enderecoArquivo, &fila);	
	//consultar(&fila);

	//remover(&fila);
	consultar(&fila);
	esvaziar(&fila);
	//consultarComecoFila(&fila);
	return 0;
}
