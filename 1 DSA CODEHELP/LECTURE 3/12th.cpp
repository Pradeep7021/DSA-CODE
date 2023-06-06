#include <iostream>
#include <vector>
using namespace std;

int main()
{  //VETCOR START LEC 2 OF ARRAY

// CREATE VECTOR
vector<int> arr; 

//size of vector array checking 
int ans = (sizeof(arr) / sizeof(int)) ;
cout << ans << endl;

//insert element 

arr.push_back(5) ;
arr.push_back(6) ;

//printing

for(int i = 0 ; i < arr.size() ; i++ ) {
    cout << arr[i] << " " ;
}

cout << endl ;

//for deleting or remove 

arr.pop_back() ;
for(int i = 0 ; i < arr.size() ; i++ ) {
    cout << arr[i] << " " ;
}

}
