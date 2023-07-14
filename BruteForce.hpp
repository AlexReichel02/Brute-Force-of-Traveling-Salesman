/***************************************************************
  Student Name: Alex Reichel
  File Name: BruteForce.hpp
  Assignment number Project 03

  Other comments regarding the file - description of why it is there, etc.
***************************************************************/

#ifndef BRUTEFORCE_HPP_
#define BRUTEFORCE_HPP_
#include<iostream>
#include<vector>
#define BILLION  1000000000L;
#include "PermutationGenerator.hpp"
using namespace std;

class BruteForce {
public:

	/**
		empty brute force object
	*/
	BruteForce();
	virtual ~BruteForce();
	/**

		GraphGenerator object representing graph
		*/
	GraphGenerator graph;

	/**
		pointer representing tour
		*/
	int* tours;
	/**
		Function that represents best tour
		*/
	void bestTour(PermutationGenerator obj);
	/**
	Function that swaps the two pointers
	@param  int representing pointer
	@param  int representing pointer
	*/
	void swap(int *a, int *b);

	/**
		Function that calculates time of the brute force process
		@param  PermutationGenerator object
		*/
	void calcTours(int numCites,PermutationGenerator perm);

	/**
		Function that calculates time of the GA process
		@param  PermutationGenerator object
		*/
	void calcTime(int numCities,PermutationGenerator perm);

	/**
		vector double of brute prices
	*/
	//vector<double> brutePrices;

	/**
		double pointer represnting temp
	*/
	double *arr2;

	/**
		Function permutes the int array
		@param  int arr[] representing int array
		@param  int n representing size of array
		*/
	void brutePerm(int *arr, int start, int end);

	/**
			Function prints the tour
		@param  int arr[] representing int array
		@param  int size representing size of array
		*/
	void printTour(int arr[], int size);

	/**
	Function that sends the cost of the tour
	@param  int arr[] representing int array
	@param  int num representing size of array
	*/
	void sendCosts(int arr[],int num);

	/**
	PermutationGenerator object
		*/
	PermutationGenerator obj;


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


	vector<double> test;
	double testCost;



	void insert(double cost);
};

#endif /* BRUTEFORCE_HPP_ */
