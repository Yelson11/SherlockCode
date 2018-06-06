#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

//Dirección de donde se toman los archivos.java
#define DIRECTION "D:/Users/Yelson/Desktop/"

char * separateFileNames(char pNames[]){
  	char * files;
    files = strtok(pNames, " ");
    return files;
};

void printNames(char * pString){
	while (pString != NULL) {
		printf("%s\n", pString);
		pString = strtok(NULL, " ,");
	}
	getch();	
};

void loadFiles(char *pParams) {
// separe los file names
// haga un arreglo  char *content;
// for each file llamas a la funcion read de FileReader
// guardas el contenido concatenando en content
// retornar content
};

char * concatenate(char * pChar1, char * pChar2){
	char * result;
	result = malloc(strlen(pChar1) + strlen(pChar2)+2);
	strcpy(result, pChar1);
	strcat(result, pChar2);
	return result;
};