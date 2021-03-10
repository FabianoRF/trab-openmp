#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {

  char palavra = "A";

  char nova = tolower(palavra);

  printf("%s\n", nova);



    char word[] = "dado"; // palavra a ser encontrada
    char pageContent[] = "dado ddado dadoo, .dado.?dado! !dados!"; // texto para procurar
    char *pt = NULL, str[100];
    strcpy(str, pageContent);
    pt = strtok(str, ",. !?"); // delimitadores que dividem as palavras
    int found=0;
    while( pt != NULL){
        if(!strcmp(word, pt)){
            printf("Found at position: %ld\n", pt - str);
            found++;
        }
        pt = strtok(NULL, ",. !?");

    }
    printf("We found %d ocurrences of the word: %s\n", found, word);
}