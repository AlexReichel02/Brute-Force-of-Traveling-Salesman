/***************************************************************
  Student Name: Alex Reichel
  File Name: BruteForce.cpp
  Assignment number Project 03

  Other comments regarding the file - description of why it is there, etc.
***************************************************************/
#include "BruteForce.hpp"

BruteForce::BruteForce() {
	// TODO Auto-generated constructor stub

}


void BruteForce::setLowestTour(double cost){
	lowestTour = cost;
}

double BruteForce::getLowestTour(){
	return lowestTour;
}


void BruteForce::bestTour(PermutationGenerator obj){


	setLowestTour(testCost);

	cout<<"Implementing BruteForce Algorithm"<<endl;
	cout<< "Best Tour was tour costed: " << testCost <<endl;


	 cout << endl;
}




void BruteForce::calcTime(int numCities,PermutationGenerator perm){
	 struct timespec start, stop;
	    double accum;

	          if( clock_gettime( CLOCK_REALTIME, &start) == -1 ) {
	            perror( "clock gettime" );
	            //return EXIT_FAILURE;
	          }

	          calcTours(numCities,perm);
	          bestTour(perm);

	          if( clock_gettime( CLOCK_REALTIME, &stop) == -1 ) {
	          	               	            perror( "clock gettime" );
	          	               	           // return EXIT_FAILURE;
	          	               	          }

	          	               	  	  	 accum = ( stop.tv_sec - start.tv_sec )  + (double)( stop.tv_nsec - start.tv_nsec )
	          	               			/ (double)BILLION;


	          	               	  		cout<<"Total time taken for " << numCities << " Cities: ";
	          	               	  		          printf( "%lf\n", accum );
}




void BruteForce::brutePerm(int *arr, int start, int end)
{

    if(start==end)
    {
        printTour(arr, end+1);
        return;
    }
    int i;
    for(i=start;i<=end;i++)
    {
        swap((arr+i), (arr+start));
        brutePerm(arr, start+1, end);
        swap((arr+i), (arr+start));
    }
}


void BruteForce::swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void BruteForce::printTour(int arr[], int size)
{

	int newSize = size+2;
	int last = size+1;
	int tour[newSize];
	tour[0] = 0;
	tour[last]=0;
	int j=1;
	int sendTour[newSize];

	for(int i=0;i<size;i++){
		tour[j] = arr[i];
		j++;
	}

	for(int i=0;i<newSize;i++){
	//	cout << tour[i] << " ";

		sendTour[i] = tour[i];
	}

	sendCosts(sendTour,newSize);

}




void BruteForce::sendCosts(int arr[],int num){

	// int newSize = sizeof(arr);
	 double cost=0.0;


		double temp=0.0;


		for(int i=1;i<num;i++){
			temp = graph.getCost((double *)arr2, arr[i-1], arr[i]);
			cost += temp;
		}




		if(test[0] < cost){
			testCost = test[0];
		}else{
			testCost = cost;
			test[0] = cost;
		}


}






void BruteForce::calcTours(int numCities,PermutationGenerator perm){
	arr2 = graph.fillGraph();
	vector<int> firstTour;
	firstTour = perm.getFirstTour();
	int tour[numCities-1];
	for(long int i=0;i<firstTour.size();i++){
		tour[i] = firstTour[i];
	}

	test.push_back(500);
	brutePerm(tour,0,numCities-2);

}




BruteForce::~BruteForce() {
	// TODO Auto-generated destructor stub
}

