#include <iostream>
#include <vector> 
using namespace std;

int main()
{
    int n; 
    cout << "ENTER THE VALUE N " << endl ;
    cin >> n ;

    vector<int>arr(n , 10 ) ;
    for(int i = 0  ; i < arr.size() ; i ++ ) {
        cout << arr[i] << " " ;
    }
    cout << endl;

    
    // initalize value in an array to use this {} or () too  
  
    vector<int>crr{10 ,20,30,50,90} ;
    for(int i = 0  ; i < crr.size() ; i ++ ) {
        cout << crr[i] << " " ;
    }
    cout << endl;

    
}
