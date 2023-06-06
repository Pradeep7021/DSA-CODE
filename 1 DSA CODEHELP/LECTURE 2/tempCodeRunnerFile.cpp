#include <iostream>               // SUM OF EVEN NO ONLY 
using namespace std;

int getEvenSum (int n ) {
    int sum = 0 ;
    for ( int i = 2 ; i <= n ; i + 2  ) {
        sum = sum + i ;
    }

    return sum ;
}

int main()
{
    int n;
    cin >> n ;

    int ans = getEvenSum(n) ;
    cout << "getEvenSum" << ans << endl ;

    // cout << "sum upto " << n << "is " << ans << endl; 
    return 0 ;

}
