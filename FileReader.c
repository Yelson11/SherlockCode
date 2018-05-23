#include <stdio.h>

char * readFile2(char *pFileName) {
    FILE * archivo;
    char *fileContent;
    archivo = fopen("D:/Users/Yelson/Desktop/Nodo.java" , "r");
    int size;

    if (archivo == NULL){
    	printf("\nError de apertura del archivo.java \n\n");
    }
    else {
    	fseek(archivo, 0, SEEK_END); // seek to end of file
    	size = ftell(archivo); // get current file pointer
    	fseek(archivo, 0, SEEK_SET);

    	fileContent = malloc(size);
    	printf("\nEl contenido del archivo de prueba es \n\n");
		//while (feof(archivo)== 0) {
			fgets(fileContent,size,archivo);
			//printf("%s",caracter);
     	//}
		//system("PAUSE");
    }
	fclose(archivo);

	return fileContent;
}
