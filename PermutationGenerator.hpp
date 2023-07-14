/***************************************************************
  Student Name: Alex Reichel
  File Name: PermutationGenerator.hpp
  Assignment number Project 03

  Other comments regarding the file - description of why it is there, etc.
***************************************************************/

#ifndef PERMUTATIONGENERATOR_HPP_
#define PERMUTATIONGENERATOR_HPP_
#include "GraphGenerator.hpp"
#include <algorithm>


class PermutationGenerator {
public:
	/**
		empty PermutationGenerator constructor
				*/
	PermutationGenerator();
	/**
			function that retrieves the number of cites , number of tours, number of generations, and percent of generation that should be mutated
				*/
	void getData(int numCites, int numTours,int numGenerations,int genPercent);

	virtual ~PermutationGenerator();

	/**
			function that generates the first tour
				*/
	void generateFirstTour();

	/**
			function that returns int representing number of tours
				*/
	int getNumTours();
	/**
			function that returns int representing number of elements in array
				*/
 int getNumElements();

	/**
		function that returns float representing generation mutated
			*/
	float getGenMut();

	/**
			function that returns int representing number of generations
		*/
	int getNumGen();

	/**
		Function that returns the first tour as a vector
		*/
	vector<int> getFirstTour();

	/**
		vector representing first tour
		*/
	vector<int>firstTour;

	/**
	int representing number of cities
		*/
	int numCities;

	/**
	int representing number of tours
	*/
	int numTours;
	/**
		int number of generations
		*/
	int numGenerations;

	/**
		double percent of genetic mutations
		*/
	double genPercent;
	/**
	number of elemnts in array
		*/
	int NUMELEMENTS;
	/**
	int tour pointer
	*/
	int *tour;

	/**
			GraphGenerator object of graph;
			*/
	GraphGenerator graph;


};

#endif /* PERMUTATIONGENERATOR_HPP_ */
