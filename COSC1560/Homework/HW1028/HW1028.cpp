//*******************************************************************************************************
//
//		File:					HW1028.cpp
//
//		Student:				Matt Evans
//
//		Assignment:				Program #HW1028
//
//		Course Name:			Programming II
//
//		Course Number:			COSC 1560-01
//
//		Due:					10/26/22
//
//
//		This program completes the copyToFile function from assignment 8
//
//		Other files required:
//			1.	none
//
//*******************************************************************************************************

#include <iostream>
#include <fstream>
using namespace std;

//*******************************************************************************************************

void copyToFile(ifstream &, ofstream &);

//*******************************************************************************************************

int main()
{
    ifstream fin;
    ofstream fout;
    fin.open("names.txt");
    fout.open("names_copy.txt");
    copyToFile(fin, fout);
    fin.close();
    fout.close();

    return 0;
}

//*******************************************************************************************************

void copyToFile(ifstream &fin, ofstream &fout)
{
    string name;
    while (fin >> name)
    {
        fout << name << endl;
    }
}