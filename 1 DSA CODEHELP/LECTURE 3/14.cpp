#include <iostream>
#include <vector> 
using namespace std;

int findUnique(vector<int> arr ) {
    int ans = 0 ;   // because any no take xor with 0 give 0 or that element that's why 0 ^ 6 = 6
    for (int i = 0 ; i < arr.size () ; i ++ ) {
        ans = ans ^ arr[i] ;
    }

    return ans ; 
}

int main()
{
//UNIQUE ELEMENET FIND KARNA HAI  
int n ;
cout << "Enter the size of an array " << " " ;
cin >> n ;

//vector create /declare
vector<int>arr(n) ;
cout << "ENter the elements " << endl;
for (int i = 0 ; i < arr.size() ; i++ ) {
    cin >> arr[i] ;
}

int uniqueElement = findUnique(arr) ;   //function create
cout << "UNIQUE ELEMENTS IS " << uniqueElement << endl;

        

}
