#include <string.h>
#include <stdbool.h>
#include <math.h>

//Es un string para facilitar a la hora de mutar
char * decimalToBinary(int pNumber){
	int tempDecimal;
    char * binary = (char *)(malloc(16));
    int index = 0;    

    tempDecimal = pNumber;  

    while(tempDecimal != 0){
    	binary[index] = (tempDecimal % 2) + '0';
        tempDecimal /= 2;
        index++;
    }
    binary[index] = '\0';
    strrev(binary);
    return binary;
};

int binaryToDecimal(char * pNumber){
	char * bin = pNumber;
	int decimal, j;
    j = sizeof(int)*8;
    while ( (j--) && ((*bin=='0') || (*bin=='1')) ) {
        decimal <<= 1;
        if ( *bin=='1' ) decimal++;
        bin++;
    }
    return decimal;
};
   

int arraySize(struct Individual pArray[]){
	int cont;
	cont = 0;
	bool flag = true;
	while(flag){
		if (pArray[cont].childQuantity != 0 ){
			cont = cont+1;
		}
		else{			
			flag = false;
		}
	}
	return cont;
};