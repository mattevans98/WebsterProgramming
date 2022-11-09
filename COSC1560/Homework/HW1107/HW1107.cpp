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

int main()
{
    fstream dataFile("record.dat", ios::out | ios::binary);

    for (int i = 0; i <= 10; i++)
    {
        dataFile.write(reinterpret_cast<char *>(&i), sizeof(i));
    }

    dataFile.close();

    return 0;
//    fstream d;
//    d.open("record.dat", ios::binary | ios::in | ios::out);
//    int a;
//    long size = sizeof(a);
//
//    d.seekg(2 * size, ios::cur);
//    d.read(reinterpret_cast<char *>(&a), size);
//    cout << a; // Outputs 2
//
//    d.seekg(-size, ios::cur);
//    d.read(reinterpret_cast<char *>(&a), size);
//    cout << a; // Outputs 9
}