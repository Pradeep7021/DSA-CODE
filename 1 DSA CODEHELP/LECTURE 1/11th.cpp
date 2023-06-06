#include <iostream>
using namespace std;

int main()
{
    int n ;
    cin >> n ;

    for (int row = 0 ; row < n ; row ++ ) {
        //half pyramid
    for (int col = 0 ; col < n - row ; col ++ ) {
        cout << "*" ;
    }

    //space pyramid

    for (int sp = 0 ; sp < 2*row+1 ; sp ++ ) {
        cout << " " ;
    } 


    // full pyramid
    for (int row = 0 ; row < n ; row ++ ) {
        
    for (int col = 0 ; col < n - row ; col ++ ) {
        cout << "* " ;
    }
      cout << endl;


}

}