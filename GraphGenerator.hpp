/***************************************************************
  Student Name: Alex Reichel
  File Name: GraphGenerator.hpp
  Assignment number Project 03

  Other comments regarding the file - description of why it is there, etc.
***************************************************************/

#ifndef GRAPHGENERATOR_HPP_
#define GRAPHGENERATOR_HPP_
#include<vector>
#include<iostream>
#include<fstream>
using namespace std;

class GraphGenerator {
public:

	/**
	Graph Generator constructor
		*/
	GraphGenerator();

	/**
	function that fills the graph and returns the pointer
		*/
	double *fillGraph();

	/**
	Function that gets the cost between two indexes
	@Param arr represents double pointer
	@param int representing i index
	@param int representing j index
	*/
	double getCost(double *arr, int i, int j);

	/**
	vector of distances
			*/
	vector<double>Distances;

	/**
		double 2d matrix of city distances
			*/
	double cityDistances[20][20];

	/**
		double pointer temp
			*/
	double *temp;
	virtual ~GraphGenerator();
};

#endif /* GRAPHGENERATOR_HPP_ */
