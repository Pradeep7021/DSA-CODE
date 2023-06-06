#include <iostream>    //grade of student 
using namespace std;

char grade(int marks ) {
    if (marks >= 90 ) {
        return 'A' ;
    }

    else if(marks >= 80 ) {
        return  'B' ;
    }
    else if ( marks >= 70 ) {
        return  'C' ;
    }

    else {
        cout << "E GRADE PASS" ;
    }
}

int main()
{
    int marks ;
    cout << "Enter the marks : ";
    cin >> marks ;

    char finalGrade = grade(marks) ;
    cout << finalGrade ;

    return 0 ; 


}
