/*
 ============================================================================
 Name        : SherlockCode.c
 Author      : Yelson Monge
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
//#include "regex.c"
#include "FileReader.c"
#include "Sherlock.c"
#include "GeneticAlgorithm.c"

int main(/*char *args*/) {
    //printf("El contenido del archivo es: \n");
    //printf("%s",readFile2("D:/Users/Yelson/Desktop/Nodo.java"));
	struct Individual in = createIndividual(15);
	printf("%d", in.genome);

    // llamar a la funcion en FileManager de loadFiles


//#pragma in parallel
  //  inspectRepeated(content); // el tiene forma de hacer copias de chorros de bytes
    //inspectVariable(content);

//Docker
	return 0;
}