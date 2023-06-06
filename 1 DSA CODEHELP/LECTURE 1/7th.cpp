#include <iostream>
using namespace std;

// loop 2nd phase start

int main()
{

//     // 6
//      *
//     **
//    ***
//   ****
//  *****
// ******

    int input  ; 
    cin >> input ; 

    for (int row = 0 ; row < input ; row ++  ) {

        //SPACES 

        for (int spaces = 0 ; spaces < input  - (row + 1 ) ; spaces ++ ) {
            cout << " " ;
        }

        //STAR 

        for ( int col = 0 ; col < row + 1 ; col ++ ) {
            cout << "* " ;
        }
        cout << endl ; 
    }







}
