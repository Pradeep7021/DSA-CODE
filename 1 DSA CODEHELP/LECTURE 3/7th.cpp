#include <iostream>
using namespace std;

int main()
{

//COUNT ZERO'S AND ONE'S IN AN ARRAY TOTAL NO OF 

int arr[] = {0 , 1 ,1 ,1 ,1,1,0 ,0,0,0, 0} ;
int size = 11 ;

//current zeroes and ones are empty null means 0 
int numZero = 0 ;
int numOne = 0 ; 

for (int i = 0 ; i < size ; i++ ) {

    //if 0 found inrease 0 bcoz total no of zero 's found 
    if(arr[i] == 0 ) {
        numZero ++ ;
    }

// again if use bcoz total no of 1 find and in else (bracket condition not write ) 
  if (arr[i] == 1) {
   // if 1 found inrease 1 bcoz total no of one 's foun 
    numOne ++ ;
  }
    } 

cout << "no of zeroes " << numZero << endl; 
cout << "no of ones " << numOne << endl; 


}

