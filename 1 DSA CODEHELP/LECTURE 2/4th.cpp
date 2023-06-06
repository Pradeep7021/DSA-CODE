#include <iostream>
using namespace std;

int add(int a , int b ) ;

int main()
{
    //function start
   int a ; 
   cout << "Enter the value a :" << endl;
   cin >> a ;
   
   int b ; 
   cout << "Enter the value b :" << endl;
   cin >> b ;

//    function creating
    int sum = add(a , b) ;

    cout << "Addition of two no is : " << sum << endl ;
   
    // int n;
    // cin >> n ;
    // for(int i = 0 ; i < n ; i++ ) {
    //     cout << "pradeep gutpa " ;
    // }
}

int add(int a , int b ) {

     int result =  a + b ;
     return result ;
}

