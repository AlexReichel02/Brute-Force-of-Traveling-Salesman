/***************************************************************
  Student Name: Alex Reichel
  File Name: GeneticTours.hpp
  Assignment number Project 03

  Other comments regarding the file - description of why it is there, etc.
***************************************************************/

#ifndef GENETICTOURS_HPP_
#define GENETICTOURS_HPP_
#include<iostream>
using namespace std;
#define BILLION  1000000000L;
#include "PermutationGenerator.hpp"

class GeneticTours {
public:

	/**
	Genetic tour constructor
	*/
	GeneticTours();

	/**
	PermutationGenerator object
		*/
	PermutationGenerator obj;

	/**
	Function that creates the genetic algorithm
	@param  PermutationGenerator object
	*/
	void createGA(PermutationGenerator obj);

	/**
		Function that converts the tour into an vecctor
		@param  int arr[] representing int array
		@param  int size representing size of array
	*/
	void convertTour(int arr[],int size);

	/**
	vector of genetic algorithm prices
	*/
	vector<double> GAPrices;

	/**
	Function permutes the int array
	@param  int arr[] representing int array
	@param  int n representing size of array
	*/
	void GAPerm(int arr1[],int n);

	/**
	Function that swaps the two pointers
	@param  int representing pointer
	@param  int representing pointer
	*/
	void swap(int *a, int *b);

	/**
	Function that gets the cost of the tour
	@param  int arr[] representing int array
	@param  int num representing size of array
	*/
	void getTourCost(int arr[],int num);

	/**

	GraphGenerator object representing graph
	*/
	GraphGenerator graph;

	/**
	Function that calculates time of the GA process
	@param  PermutationGenerator object
	*/
	void calcTime(PermutationGenerator obj);

	/**
	Function that represents best tour
	*/
	void bestTour();

	/**
		Function prints the tour
	@param  int arr[] representing int array
	@param  int size representing size of array
	*/
	void printGA(int arr[],int size);


	/**
		function that sets the lowest tour
		@param double representing cost of tour
	*/
	void setLowestTour(double cost);

	/**
			Function that returns lowest tour
	*/
	double getLowestTour();

	/**
	double representing lowest tour
	*/
	double lowestTour;
	virtual ~GeneticTours();
};

#endif /* GENETICTOURS_HPP_ */
