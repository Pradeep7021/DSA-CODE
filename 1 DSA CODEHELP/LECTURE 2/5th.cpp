#include <iostream>                                  //MAXIMUM OF 3 NUM FINDING
using namespace std;


// num1 num2 num3 are parameter here  
int findMax (int num1, int num2 , int num3) {
    if (num1> num2 && num1 > num3 ) {
        return num1;
    }

    else if(num2 > num3 && num2 > num1 ) {
        return num2 ; 
    }

    else {
        return num3 ;
    }
}

int main()
{
    int a , b, c ;
    cin >> a >> b >> c ;

    // a b c are argument here 

    int max = findMax(a,b,c) ;
    cout << max << endl;


}
