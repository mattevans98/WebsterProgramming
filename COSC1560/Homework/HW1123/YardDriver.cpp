//*******************************************************************************************************
//
//		File:					HW1123.cpp
//
//		Student:				Matt Evans
//
//		Assignment:				Program #HW1123
//
//		Course Name:			Programming II
//
//		Course Number:			COSC 1560-01
//
//		Due:					11/28/22
//
//
//		This program completes the program from problem 13.26 in the textbook
//
//		Other files required:
//			1.	Yard.h
//			2.	Yard.cpp
//
//*******************************************************************************************************

#include <iostream>
#include "Yard.h"
using namespace std;

//*******************************************************************************************************

int main()
{
    Yard yards[3];

    for (auto &yard: yards)
    {
        int len, w;
        cout << "Enter the length of the yard: ";
        cin >> len;
        yard.setLength(len);
        cout << "Enter the width of the yard: ";
        cin >> w;
        yard.setWidth(w);
    }
}

//*******************************************************************************************************