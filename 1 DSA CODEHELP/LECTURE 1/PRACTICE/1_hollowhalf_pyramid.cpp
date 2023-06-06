#include <iostream>
using namespace std;
// FILES CHANGE THEN PUSH INTO CODE 
int main()
{

int n ;
cin >> n ;
for (int row = 0 ; row < n ; row ++ ) {
    //for col  

    for (int col = 0 ; col < row + 1 ; col ++ ) {

        // hollow condition apply 
        if( col == 0 ||col  == row || row == n -1 ) {

            cout << col + 1  ;

        }

        else { 
            cout << " " ;
        }
        
    }



    cout << endl ;
}






}
