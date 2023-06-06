#include <iostream>
using namespace std;

int decimaltoBinary (int n ) {
    //devision method

    while (n > 0 ) {
        int bit = n % 2 ;
        cout << bit << " " ;
        n = n / 2 ;
    }
}

int main()
{     
    int n ;
    cin >> n ;

    int binary = decimaltoBinary ( n ) ; 
    return 0 ;


}
