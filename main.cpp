/***************************************************************
  Student Name: Alex Reichel
  File Name: main.cpp
  Assignment number Project 03

  Other comments regarding the file - description of why it is there, etc.
***************************************************************/

#include <iostream>
#include<fstream>
#include<vector>
#include "GraphGenerator.hpp"
#include "PermutationGenerator.hpp"
#include"BruteForce.hpp"
#include "GeneticTours.hpp"

using namespace std;


int main() {


	int numCities;
	int numTours;
	int numGenerations;
	double genPercent;

	PermutationGenerator perm;
	cout<<"Number of Cities to run"<<endl;
	cin >> numCities;
	cout<<"How many indiviudals tours are in a given generation"<<endl;
	cin>>numTours;
	cout<<"How many generations to run "<<endl;
	cin >> numGenerations;
	cout<< "Percentage of a generation that should be comprimised of mutations"<<endl;
	cin >> genPercent;


	perm.getData(numCities, numTours,numGenerations, genPercent);
	perm.generateFirstTour();
	GeneticTours GA;
	GA.calcTime(perm);
	BruteForce obj;
	obj.calcTime(numCities,perm);

	GA.getLowestTour();
	obj.getLowestTour();
	cout<<"Percent of Optimal that Genetic Algorithm Produced: " << (GA.getLowestTour() / obj.getLowestTour() ) * 100 <<"%"<<endl;


	return 0;
}
