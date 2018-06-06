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
#include "FileReader.c"
#include "Sherlock.c"
#include "GeneticAlgorithm.c"
#include "FileManager.c"

int main(/*char *args*/) {
    //printf("El contenido del archivo es: \n");
    //printf("%s",readFile2("D:/Users/Yelson/Desktop/Nodo.java"));
	//struct Individual in = createIndividual(105);
	//printf("%d", in.genome);
    // llamar a la funcion en FileManager de loadFiles
	char s[] = "jaja jeje jiji jojo juju";
	char * l = separateFileNames(s);
	printNames(l);

//#pragma in parallel
  //  inspectRepeated(content); // el tiene forma de hacer copias de chorros de bytes
    //inspectVariable(content);

//Docker
	return 0;
}