#include <iostream>
using namespace std;

int main()
{
    int arr[5] ;
    cout << "taking input from user " ;
    for (int i = 0  ; i < 5 ; i++ ) {
        cin >> arr[i] ;
    }

    //input double printing 
    cout <<  "the double of elements are  " ;
    for (int i = 0 ; i < 5 ; i++ ) {
        cout << 2 * arr [i] << " " ;
    }
}
