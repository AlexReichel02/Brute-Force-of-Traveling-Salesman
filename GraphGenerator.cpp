/***************************************************************
  Student Name: Alex Reichel
  File Name: GrpahGenerator.cpp
  Assignment number Project 03

  Other comments regarding the file - description of why it is there, etc.
***************************************************************/
#include "GraphGenerator.hpp"

GraphGenerator::GraphGenerator() {
	// TODO Auto-generated constructor stub

}

double *GraphGenerator::fillGraph(){
	ifstream inFile;
	double distance=0.0;
    inFile.open("distances.txt");

				if(!inFile){
							cout<<"unable to open"<<endl;
						}else{


							while(!inFile.eof()){

								inFile>>distance;
								Distances.push_back(distance);
								//cout<<distance<<endl;
									}
						}

		int i, j;
		int num=0;
		   for(i = 0; i < 20; i++) {
		      for(j = 0; j < 20; j++) {
		    	  if(i == j){
		    		  cityDistances[i][j] = 0.0;
		    	  }else{
		    	 cityDistances[i][j] = Distances[num];
		    	 num++;

		        // cout<<"Distance between " << i << " and " << j  << ": " << cityDistances[i][j] << endl;

		    	  }
		      }
		      //cout << endl;
		   }

return reinterpret_cast<double *>(cityDistances);

}

double GraphGenerator::getCost(double *arr,int r,int c){
	double temp=0.0;

	int i, j;
    for (i = 0; i < 20; i++){
      for (j = 0; j < 20; j++){

    		   temp = *(arr+i*20+j);

    		   if(i == r && j == c){

    			 // cout<< i << " " << j << " "<< temp<< " "<<endl;

    			   return temp;
    		   }
      	  }

    }
    return temp;
    //return temp2;
}

GraphGenerator::~GraphGenerator() {
	// TODO Auto-generated destructor stub
}

