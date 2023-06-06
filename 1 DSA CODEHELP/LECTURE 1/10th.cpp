#include <iostream>
using namespace std;

int main()
{

    
//      *    
//     * *   
//    *   *  
//   *     * 
//  *       *
// *         *
// *          *
//  *        *
//   *      *
//    *    * 
//     *  *
//      *


    int n ;
    cin >> n ;

    for (int row = 0 ; row < n ; row ++ ) {
        // for spaces 

        for (int spaces = 0 ; spaces < n- (row + 1 ) ; spaces ++ ) {
            cout << " " ;
        }

        // for star print and spaces b/w them 

        for (int col = 0 ; col < 2*row+1 ; col ++ ) {

            // if first == 0 and last col == 2 row bcoz what is less or before no 2row + 1 is 2 row 

            if (col == 0 || col == 2*row ) {
                cout << "*" ;
            }

          
            else {
                cout << " " ;
            }

            

        }

        cout << endl ;
    }


    // 2ND HALF PRINTING

    // row printing 

    for (int row = 0 ; row < n ; row ++ ) {
        //spaces printing 

        for (int spaces = 0 ; spaces < row ; spaces ++ ) {
            cout << " " ;
        }

         // stars printing 
     for (int col = 0 ; col<2*n-2*row-1 ; col ++ ) {

        // if 1st and last character

        if (col ==0 || col == 2*n-2*row-2 ) {
            cout << "* " ;
        }

        else {
            cout<< " " ;
        }

       
     }

      cout << endl;


    }
    
} 
