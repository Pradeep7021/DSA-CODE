#include <iostream>
using namespace std;

int main()
{
    int n ;
    cout << "ENTER THE VALUE OF N " << endl;
    cin >> n; 

    for (int row = 0 ; row < n ; row ++ ) {

        //for column 
        for (int col = row + 1 ; col <= n ; col ++ ) {

            if(col == row + 1 || col == n ||  row == 0 ) {

                cout << col ;

            } 

            else {
                cout << " " ;
            }
            
            

        }

        cout << endl;

    }


}
