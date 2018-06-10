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
void calculate(struct GeneticAlgorithm pAlgorithm, int pRepQ, int pExcQ, int pVarQ,  int pMagQ);
void fitnessFunction(struct Individual pIndiv);
void determinateScores(struct Individual p[]);
void createInitialPopulation(struct Individual population[]);
void organize();
void combine();
void deleteUseless();

//----------Body's Functions----------
void calculate(struct GeneticAlgorithm pAlgorithm, int pRepQ, int pExcQ, int pVarQ,  int pMagQ){
	pAlgorithm.iterationQuantity = 20;

	//Los padres
	pAlgorithm.populationQuantity = pRepQ + pExcQ + pVarQ + pMagQ;
	struct Individual population[pAlgorithm.populationQuantity];

	printf("%s", "Cantidad de hijos en total: ");
	printf("%d\n", pAlgorithm.populationQuantity);

	//Esto no me gusta - debe solucionarse
	//Crea la población inicial
	int indexAbsolute = 0;
	while(pRepQ > 0){
		population[indexAbsolute] = createIndividual(2);
		indexAbsolute = indexAbsolute + 1;
		pRepQ = pRepQ - 1;
	}
	while(pExcQ > 0){
		population[indexAbsolute] = createIndividual(3);
		indexAbsolute = indexAbsolute + 1;
		pExcQ = pExcQ - 1;
	}
	while(pVarQ > 0){
		population[indexAbsolute] = createIndividual(1);
		indexAbsolute = indexAbsolute + 1;
		pVarQ = pVarQ - 1;
	}
	while(pMagQ > 0){
		population[indexAbsolute] = createIndividual(4);
		indexAbsolute = indexAbsolute + 1;
		pMagQ = pMagQ - 1;
	}

	//Comienza el proceso
	int indexParents;
	for (indexParents = 0; indexParents < pAlgorithm.iterationQuantity; ++indexParents){
		determinateScores(population);
		organize();
	}
};

void fitnessFunction(struct Individual pIndiv){
	pIndiv.score = 120;
};

void determinateScores(struct Individual pList[]){
	int size = arraySize(pList);
	printf("%s", "Tamano de la poblacion:");
	printf("%d", size);
	int indexPopulation;
	for(indexPopulation = 0; indexPopulation < size; ++indexPopulation){
		fitnessFunction(pList[indexPopulation]);
	}
};

void createInitialPopulation(struct Individual population[]){
	int indexPopulation;
	for(indexPopulation = 0; indexPopulation < arraySize(population); ++indexPopulation){

	}
};

void organize(){

};

void combine(){

};

void deleteUseless(){

};

;

//funciones del algoritmos 