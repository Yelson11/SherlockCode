#include <stdio.h>
#include <string.h>
#include "Individual.c"
#include "OtherFunctions.c"
#define EVALUATION_NUMBER 3000

struct GeneticAlgorithm
{
	int iterationQuantity;
};

//----------Declare functions----------
void calculate(struct GeneticAlgorithm pAlgorithm, int pNumVar, int pNumRep, int pNumExcep, int pNumMagic);
int fitnessFunction(struct Individual pIndiv);
void determinateScores(struct Individual p[]);
void organize();
void combine();
void deleteUseless();


//----------Body's Functions----------
void calculate(struct GeneticAlgorithm pAlgorithm, int pNumVar, int pNumRep, int pNumExcep, int pNumMagic){
	//Los padres
	struct Individual population[4];
	population[0] = createIndividual(pNumVar,1);
	population[1] = createIndividual(pNumRep,2);
	population[2] = createIndividual(pNumExcep,3);
	population[3] = createIndividual(pNumMagic,4);

	//Comienza el proceso
	int indexParents;
	for (indexParents = 0; indexParents < pAlgorithm.iterationQuantity; ++indexParents){
		determinateScores(population);
		organize();

	}
};

int fitnessFunction(struct Individual pIndiv){
	float result;
	result = EVALUATION_NUMBER/pIndiv.genome;
	pIndiv.score = result;
};

void determinateScores(struct Individual pList[]){
	int size = arraySize(pList);
	int indexPopulation;
	//for(indexPopulation = 0; indexPopulation < pList.)
};

void organize(){

};

void combine(){

};

void deleteUseless(){

};

;

//funciones del algoritmos 