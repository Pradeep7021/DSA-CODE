#include <iostream>
using namespace std;

int main()
{
// 1    
// 12   
// 123  
// 1234 
// 12345

    int n ; 
    cin >> n ;
    //FOR OUTER LOOP 

for (int row = 0 ; row < n ; row ++ ) {
    // FOR INNNER LOOP 

    for (int col = 0 ; col < row + 1 ; col ++ ) {

        //PRINT KY KARNA HAI COL + 1 CO 
        cout << col + 1 ;
    }

    cout << endl ;
}






}
