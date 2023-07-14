/***************************************************************
  Student Name: Alex Reichel
  File Name: GeneticTours.cpp
  Assignment number Project 03

  Other comments regarding the file - description of why it is there, etc.
***************************************************************/

#include "GeneticTours.hpp"

GeneticTours::GeneticTours() {
	// TODO Auto-generated constructor stub

}

void GeneticTours::createGA(PermutationGenerator obj){

	int numCities = obj.getNumElements();
	int numTours = obj.getNumTours();
	int numGen = obj.getNumGen();


	vector<int> firstTour;
	firstTour = obj.getFirstTour();
	int tour[numCities-1];

		for(int i=0;i<firstTour.size();i++){
			    tour[i] = firstTour[i];
			    }


	int n = firstTour.size()  ;

	for( int i=0;i<numGen;i++){

		for(int j=0;j<numTours;j++){
			GAPerm(tour, n);
			printGA(tour,n);
		}


	}

	bestTour();


}


void GeneticTours::bestTour(){
	double min =   *min_element(GAPrices.begin(), GAPrices.end());
	setLowestTour(min);


	cout<<"Implementing Genetic Algorithm"<<endl;
	cout<< "Best Tour was tour Costed: " << min <<" ";

	cout<<endl;
}




void GeneticTours::calcTime(PermutationGenerator obj){
	    struct timespec start, stop;
	    double accum;

	          if( clock_gettime( CLOCK_REALTIME, &start) == -1 ) {
	            perror( "clock gettime" );
	            //return EXIT_FAILURE;
	          }

	          createGA(obj);

	          if( clock_gettime( CLOCK_REALTIME, &stop) == -1 ) {
	          	      perror( "clock gettime" );
	          	               	}

	         accum = ( stop.tv_sec - start.tv_sec )  + (double)( stop.tv_nsec - start.tv_nsec ) / (double)BILLION;

	        cout<<"Total time taken for " << obj.getNumElements() << " Cities: " << " with " << obj.getNumTours() << " tours within " << obj.getNumGen() << " Generations"<<endl ;
	        printf( "%lf\n", accum );
}


void GeneticTours::swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void GeneticTours::GAPerm(int arr1[], int n )
  {
	srand ( time(NULL) );
	    for (int i = n-1; i > 0; i--)
	    	//n-1
	    {
	        int j = rand() % (i+1);
	        swap(&arr1[i], &arr1[j]);
	    }
   }

void GeneticTours::getTourCost(int arr[],int num){

	 vector<int>firstTour = obj.getFirstTour();

	 double cost=0.0;
	 double *arr2 = graph.fillGraph();

		double temp=0.0;


		for(int i=1;i<num;i++){
			temp = graph.getCost((double *)arr2, arr[i-1], arr[i]);
			cost += temp;
		}

		GAPrices.push_back(cost);



}



void GeneticTours::printGA(int arr[],int size){
	int arrGA[size+2];
	arrGA[0] = 0;
	arrGA[size+1] = 0;
	int j=1;
	for(int i=0;i<size;i++){
		arrGA[j]= arr[i];
		j++;
	}
	for(int i=0;i<size+2;i++){
			//cout<<arrGA[i] << " ";
		}



	getTourCost(arrGA,size+2);
	//cout<<endl;

}

void GeneticTours::setLowestTour(double min){
	lowestTour = min;
}

double GeneticTours::getLowestTour(){
	return lowestTour;
}


GeneticTours::~GeneticTours() {
	// TODO Auto-generated destructor stub
}

