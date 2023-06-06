#include <iostream>
using namespace std;

int main()
{  //taking input values from the user 
   int arr [10] ;
   cout << "ENter the input array values " ;

   for(int i = 0 ; i < 10 ; i ++ ) {
    cin >> arr[i] ;
   }

   //printing the values
   cout << " printing the values in array " ;
   for(int i = 0 ; i < 10 ; i ++ ) {
    cout << arr [i] << " ";
   }
}
