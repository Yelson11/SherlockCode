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

int main() {
    FILE * archivo;
    char caracter[100];

    archivo = fopen("D:/Users/Yelson/Desktop/Probabilistic.txt","r");

    if (archivo == NULL)
        {
            printf("\nError de apertura del archivo. \n\n");
        }
    else {
    	printf("\nEl contenido del archivo de prueba es \n\n");
		while (feof(archivo)== 0) {
			fgets(caracter,100,archivo);
     		printf("%s",caracter);
     	}
		system("PAUSE");
    }
	fclose(archivo);

	return 0;
}
