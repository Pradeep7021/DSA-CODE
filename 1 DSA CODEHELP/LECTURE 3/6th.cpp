#include <iostream>
using namespace std;

//find function 

//bool take return true or false 

bool find(int arr[] , int size , int key ) {
    //linear search loop 

    for (int i = 0 ; i < size ; i++ ) {
        if(arr[i] == key ) {
            return true ; 
        }     
    }

    return false ;
}

int main()
{//linear search
int arr [] = { 1, 3, 5, 6, 9 } ;
int size = 5 ;

//taking key input from user (value find ) 
int key ;
cin >> key ;

if (find (arr,size, key )) {
    cout << "FOUND " << endl;
}

else {
    cout<< "NOT FOUND " << endl; 
}

}
