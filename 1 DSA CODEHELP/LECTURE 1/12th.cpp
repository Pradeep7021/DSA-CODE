#include <iostream>
using namespace std;

int main()
{
// ****** ******
// *****   *****
// ****     ****
// ***       ***
// **         **
// *           *


    int n ;
    cin >> n ;

    for (int row = 0 ; row < n ; row ++ ) {

        //FIRST HALF PYRAMID

        for(int col = 0 ; col <n-row ; col ++ ) {
            cout << "*" ;
        } 


        //spaces pyramid print 

        for (int sp = 0 ; sp < 2*row+1 ; sp ++ ) {
            cout << " " ;
        }

        // half pyramid
       
            for (int col = 0 ; col < n - row ; col ++ ) {
                cout << "*" ;
            }
        

        cout << endl;

    }

    for (int row = 0 ; row < n ; row ++ ) {

        //FIRST HALF PYRAMID

        for(int col = 0 ; col < row +1 ; col ++ ) {
            cout << "*" ;
        } 


        //spaces pyramid print 

        for (int sp = 0 ; sp < 2*n-2*row-1 ; sp ++ ) {
            cout << " " ;
        }

        // half pyramid
       
            for (int col = 0 ; col < row + 1 ; col ++ ) {
                cout << "*" ;
            }
        

        cout << endl;

    }


}
