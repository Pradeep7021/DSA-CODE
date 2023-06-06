#include <iostream>
using namespace std;

void printArr(int arr[] ,int size ) {
   for(int i = 0 ; i < size ; i++ ) {
    cout << arr [i] << " ";
   }
   cout << endl;


}

int main()
{
// PASS BY REFRENCE USING IN ARRAYS
int arr[] = {5 , 6 } ;
int size = 2 ;

printArr(arr, size ) ;


}
