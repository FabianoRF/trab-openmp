#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//biblioteca OpenMP
#include <omp.h>

#include <ctype.h>

char word[] = "faca"; // palavra a ser encontrada

int qtdOcurrences=0;


void consumidor();


// le o caminho do arquivo e a palavra
int main(){

  consumidor();
	
		
	return 0;
}


void consumidor() {
  // pega uma linha na fila ****
  //char pageContent[] = "DADO DDADO dadoo, .DadO.?dado! !dados!"; // substituir pela linha desenfileirada
  char pageContent[] = "faca ddfacA. ()*&$FaCa fac.a ?!@faca"; 


  // transforma em minuscula
  int lineLength = strlen(pageContent);
  int i = 0;

  printf("%i\n", lineLength);

  for(i = 0; i < lineLength; i++ ) {
    //isalpha verifica se é uma letra do alfabeto
    if (isalpha(pageContent[i]))
    {
      //tolower transforma em minuscula
      pageContent[i] = tolower(pageContent[i]);
    }
  }

  // inicio da procura pela palavra
  char *pt = NULL, str[100];

  strcpy(str, pageContent);
  
  pt = strtok(str, ",. !?"); // delimitadores que dividem as palavras
  
  while( pt != NULL){
      if(!strcmp(word, pt)){
          qtdOcurrences++; // conta as ocorrencias
      }
      pt = strtok(NULL, ",. !?@$*()");

  }
  printf("We found %d ocurrences of the word: %s\n", qtdOcurrences, word);

  
}