#include <stdio.h>
#include <string.h>
#include "Individual.c"
#include "OtherFunctions.c"

struct GeneticAlgorithm
{
	int iterationQuantity;
	int populationQuantity;
};

//----------Declare functions----------
void calculate(struct GeneticAlgorithm pAlgorithm);
void fitnessFunction(struct Individual pIndiv);
void determinateScores(struct Individual p[]);
void createInitialPopulation(struct Individual population[]);
void organize();
void combine();
void deleteUseless();

//----------Body's Functions----------
void calculate(struct GeneticAlgorithm pAlgorithm){
	//Los padres
	pAlgorithm.populationQuantity = 28;
	struct Individual population[pAlgorithm.populationQuantity];
	createInitialPopulation(population);
	//Comienza el proceso
	int indexParents;
	for (indexParents = 0; indexParents < pAlgorithm.iterationQuantity; ++indexParents){
		determinateScores(population);
		organize();
	}
};

void fitnessFunction(struct Individual pIndiv){
	
};

void determinateScores(struct Individual pList[]){
	int size = arraySize(pList);
	int indexPopulation;
	for(indexPopulation = 0; indexPopulation < size; ++indexPopulation){
		fitnessFunction(pList[indexPopulation]);
	}
};

void createInitialPopulation(struct Individual population[]){

};

void organize(){

};

void combine(){

};

void deleteUseless(){

};

;

//funciones del algoritmos 