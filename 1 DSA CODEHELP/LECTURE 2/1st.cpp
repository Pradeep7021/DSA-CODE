#include <iostream>
using namespace std;

int main()
{
    bool a = true ;
    bool b = false ;

    //and operator
    cout <<  (a&b) << endl;

    //or operator
    cout <<  (a|b) << endl ;

// not operator ~ 
cout << (~ a) << endl ;

//xor operator
cout << (a^b) << endl;


cout << (5 & 10 ) << endl;

cout << (3 |4) << endl;


int leftshift = 12 ;
leftshift = leftshift << 2 ;
cout << leftshift << endl ;



}
