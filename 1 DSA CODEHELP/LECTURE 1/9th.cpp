#include <iostream>
using namespace std;

int main()
{

// join full and half pyramid both togther get
 int input  ; 
    cin >> input ; 

    for (int row = 0 ; row < input ; row ++  ) {

        for (int spaces = 0 ; spaces < input  - (row + 1 ) ; spaces ++ ) {
            cout << " " ;
        }

        for ( int col = 0 ; col < row + 1 ; col ++ ) {
            cout << "* " ;
        }
        cout << endl ; 
    }


    for (int row = 0 ; row < input  ; row ++ ) {
        for (int spaces = 0 ; spaces < row ; spaces ++ ) {
            cout << " " ;
        }

        for (int col = 0 ; col < input - row ; col ++ ) {
            cout << "* " ;
        }

        cout << endl ;

    }







}
