#include <iostream>
#include <limits.h>
using namespace std;

int main()
{  //MAXIMUM NO IN AN ARRAY 

int arr [] = {2 , 5 , 8 , 7 , 9 , 4 , 2 , 1  } ;
int size = 8 ;

//initialize max no with INT_MIN
int maxNum = INT_MIN ; 

//LINEAR SEARCH LOOP 
for (int i = 0 ; i < size ; i ++ ) {
    //check each element of array and if it is greater than change max value with it 
    if (arr[i] > maxNum ) {
        maxNum = arr[i] ;

    }
}

cout << "MAXIMUM NO IS " << maxNum ;

}
