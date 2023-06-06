#include <iostream>                 //counting from  1 to n ;
using namespace std;

void printNum (int n ) {

    for (int i = 1 ;i<=n ; i++ ) {
        cout << i << " " ;
    }
    cout << endl ;
}

int main()
{
     int n ;
     cout << "enter the value of n " ;
     cin >> n ;

     printNum(n) ;


}
