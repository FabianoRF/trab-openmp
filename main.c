#include <stdio.h>
#include <stdlib.h>
//biblioteca OpenMP
#include <omp.h>

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
  int 
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


	#pragma omp parallel num_threads(omp_get_thread_num())
	init();
		
	return 0;
}
