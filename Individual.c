struct Individual
{
	int genome;
	int weight;
	float score;
	int childQuantity;
};

struct Individual createIndividual(int pPhenotype, int pChildQ);

struct Individual createIndividual(int pPhenotype, int pChildQ){
	struct Individual indiv;
	indiv.genome = pPhenotype;
	indiv.childQuantity = pChildQ;
	if(pChildQ == 1) {
		indiv.weight = 22;
	}
	if(pChildQ == 2) {
		indiv.weight = 35;
	}
	if(pChildQ == 3) {
		indiv.weight = 25;
	}
	if(pChildQ == 4) {
		indiv.weight = 18;
	}
	return indiv;
}