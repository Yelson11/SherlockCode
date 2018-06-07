#include <stdlib.h>
#include <time.h>

#define MIN_VAR 0
#define MAX_VAR 14416
#define MIN_MAG 14417
#define MAX_MAG 26212
#define MIN_EXC 26213
#define MAX_EXC 42596
#define MIN_REP 42597
#define MAX_REP 65535

struct Individual
{
	int genome;
	float score;
	int childQuantity;
};

struct Individual createIndividual(int pChildQ);

struct Individual createIndividual(int pChildQ){
	struct Individual indiv;
	indiv.childQuantity = pChildQ;
	if(pChildQ == 1) {
		int num = (rand() % (MAX_VAR - MIN_VAR + 1)) + MIN_VAR;
		indiv.genome = num;
	}
	if(pChildQ == 2) {
		int num = (rand() % (MAX_REP - MIN_REP + 1)) + MIN_REP;
		indiv.genome = num;
	}
	if(pChildQ == 3) {
		int num = (rand() % (MAX_EXC - MIN_EXC + 1)) + MIN_EXC;
		indiv.genome = num;
	}
	if(pChildQ == 4) {
		int num = (rand() % (MAX_MAG - MIN_MAG + 1)) + MIN_MAG;
		indiv.genome = num;
	}
	return indiv;
};