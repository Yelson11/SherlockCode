#include <stdio.h>
#include <string.h>
#include "Individual.c"

struct GeneticAlgorithm
{
	int individualQuantity;
	int iterationQuantity;
};

//----------Declare functions----------
void calculate(int pNumVar, int pNumRep, int pNumExcep, int pNumMagic);
int fitnessFunction();
void createPoblation();
void organize();
void combine();
void deleteUseless();
struct Individual createIndividual(int pPhenotype);


//----------Body's Functions----------
void calculate(int pNumVar, int pNumRep, int pNumExcep, int pNumMagic){

};

int fitnessFunction(){

};

void createPoblation(){

};

void organize(){

};

void combine(){

};

void deleteUseless(){

};

struct Individual createIndividual(int pPhenotype){
	struct Individual indiv;
	indiv.genome = pPhenotype;
	return indiv;
};

//funciones del algoritmos 