//*******************************************************************************************************
//
//		File:					HW1107.cpp
//
//		Student:				Matt Evans
//
//		Assignment:				Program #HW1107
//
//		Course Name:			Programming II
//
//		Course Number:			COSC 1560-01
//
//		Due:					11/9/22
//
//
//		This program completes the program discussed in class
//
//		Other files required:
//			1.	none
//
//*******************************************************************************************************

#include <iostream>
#include <fstream>
using namespace std;

//*******************************************************************************************************

// File Contents: 0 1 2 3 4 5 6 7 8 9 10 <EOF>

int main()
{
    fstream d;
    d.open("record.dat", ios::binary | ios::in | ios::out);
    int a;
    long size = sizeof(a);

    d.seekg(2 * size, ios::cur);
    d.read(reinterpret_cast<char *>(&a), size);
    cout << a; // Outputs 2

    d.seekg(-size, ios::cur);
    d.read(reinterpret_cast<char *>(&a), size);
    cout << a; // Outputs 9

    d.seekg(5 * size, ios::beg);
    d.read(reinterpret_cast<char *>(&a), size);
    cout << a; // Outputs 5

    d.seekg(-3 * size, ios::cur);
    d.read(reinterpret_cast<char *>(&a), size);
    cout << a << endl; // Outputs 3

    return 0;
}