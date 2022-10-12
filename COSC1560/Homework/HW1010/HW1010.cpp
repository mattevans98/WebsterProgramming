//*******************************************************************************************************
//
//		File:					HW1010.cpp
//
//		Student:				Matt Evans
//
//		Assignment:				Program #HW1010
//
//		Course Name:			Programming II
//
//		Course Number:			COSC 1560-01
//
//		Due:					10/12/22
//
//
//		This program displays the values in an array of structs
//
//		Other files required:
//			1.	none
//
//*******************************************************************************************************

#include <iostream>
using namespace std;

//*******************************************************************************************************

struct Employee
{
    string name;
    int hours;
    double hourly;
};

//*******************************************************************************************************

void display(Employee [], int);

//*******************************************************************************************************

int main()
{
    const int SIZE = 5;

    Employee emps[SIZE] = {
            {"John Smith", 42, 25.00},
            {"Jane Doe",   20, 30.00},
            {"Joe Blow",   30, 18.00},
            {"John Doe",   35, 20.00},
            {"Jane Smith", 45, 15.00}
    };

    display(emps, SIZE);

    return 0;
}

//*******************************************************************************************************

void display(Employee emps[], int size)
{
    for (int i = 0; i < size; i++)
        cout << emps[i].name << " worked " << emps[i].hours << " hours at $" << emps[i].hourly
             << " per hour." << endl;
}

//*******************************************************************************************************

// Output:
/*
John Smith worked 42 hours at $25 per hour.
Jane Doe worked 20 hours at $30 per hour.
Joe Blow worked 30 hours at $18 per hour.
John Doe worked 35 hours at $20 per hour.
Jane Smith worked 45 hours at $15 per hour.

Process finished with exit code 0
*/