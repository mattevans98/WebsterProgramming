#include <iostream>
using namespace std;

/*
Constructor
    - initializes the data members of a struct
    - special member function
        - no return type
        - same name as the struct

Destructor
    - deallocates memory
    - special member function
        - no return type
        - same name as the struct
        - preceded by a tilde (~)
*/


//*******************************************************************************************************

struct Student
{
    char name[81];
    int id;
    double grade;

    Student()
    {
        cout << "Constructor called" << endl;
        strcpy(name, "-");
        id = 0;
        grade = 0.0;
    }
};

//*******************************************************************************************************

int main()
{
    Student stud[10];

    return 0;
}