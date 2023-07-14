/***************************************************************
  Student Name: Alex Reichel
  File Name: PermutationGenerator.cpp
  Assignment number Project 03

  Other comments regarding the file - description of why it is there, etc.
***************************************************************/

#include "PermutationGenerator.hpp"

PermutationGenerator::PermutationGenerator() {
	// TODO Auto-generated constructor stub

}

void PermutationGenerator::getData(int numCities1, int numTours1,int numGenerations1,int genPercent1){

		NUMELEMENTS = numCities1;
		numTours = numTours1;
		numGenerations = numGenerations1;
		genPercent = genPercent1;
}

int PermutationGenerator::getNumTours(){
	return numTours;
}

int PermutationGenerator::getNumElements(){
	return NUMELEMENTS;
}

int PermutationGenerator::getNumGen(){
	return numGenerations;
}

float PermutationGenerator::getGenMut(){
	return genPercent;
}


void PermutationGenerator::generateFirstTour(){

	int tour2[NUMELEMENTS-1];



	int data[NUMELEMENTS];



	int j=0;
	for(int i=0;i<NUMELEMENTS;i++){
		j++;
		data[i] = j;
	}





     for(int loop = 0; loop < NUMELEMENTS-1; ++loop)
		    {

		    	tour2[loop] = data[loop];
		    	firstTour.push_back(tour2[loop]);

		    }
		    cout<<endl;

}

vector<int> PermutationGenerator::getFirstTour(){
	return firstTour;
}





PermutationGenerator::~PermutationGenerator() {
	// TODO Auto-generated destructor stub
}
