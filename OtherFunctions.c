#include <string.h>
#include <stdbool.h>
// decimal to binary
// binary to decimal

//Es un string para facilitar a la hora de mutar
char * decimalToBinary(int pNumber){

};

int binaryToDecimal(char * pNumbre){

};

int arraySize(struct Individual pArray[]){
	int i;
	i = 0;
	bool flag = true;
	while(flag){
		if (pArray[i].childQuantity != 0 ){
			i = i+1;
		}
		else{			
			flag = false;
		}
	}
	return i;
};