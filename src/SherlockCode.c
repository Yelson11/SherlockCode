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
#include "JavaFileReader.cpp"

int main() {
    FILE * archivo;
    char caracter[100];

    archivo = fopen("D:/Users/Yelson/Desktop/Nodo.java","r");

    if (archivo == NULL){
    	printf("\nError de apertura del archivo.java \n\n");
    }
    else {
    	printf("\nEl contenido del archivo de prueba es \n\n");
		while (feof(archivo)== 0) {
			fgets(caracter,100,archivo);
     		printf("%s",caracter);
     	}
		//system("PAUSE");
    }
	fclose(archivo);
	//JavaFileReader * r = new JavaFileReader();
	return 0;
}
