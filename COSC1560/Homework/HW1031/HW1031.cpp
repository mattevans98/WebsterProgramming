//*******************************************************************************************************
//
//		File:					HW1031.cpp
//
//		Student:				Matt Evans
//
//		Assignment:				Program #HW1031
//
//		Course Name:			Programming II
//
//		Course Number:			COSC 1560-01
//
//		Due:					11/2/22
//
//
//		This program completes the displayLastFive() function from assignment 8
//
//		Other files required:
//			1.	none
//
//*******************************************************************************************************

#include <iostream>
#include <fstream>
using namespace std;

//*******************************************************************************************************

const int STRING_SIZE = 81;

//*******************************************************************************************************

void displayLastFive(ifstream &);

//*******************************************************************************************************

int main()
{
    ifstream fin;
    fin.open("names.txt");
    if (!fin.fail())
    {
        displayLastFive(fin);
        fin.close();
    }
    else
    {
        cout << "Error opening file" << endl;
    }
    return 0;
}

//*******************************************************************************************************

void displayLastFive(ifstream &fin)
{
    char name[STRING_SIZE];
    int count = 0;

    while (fin.getline(name, STRING_SIZE))
        count++;

    int lineNums[count];

    fin.clear();
    fin.seekg(0L, ios::beg);

    for (int i = 0; i < count - 5; i++)
    {
        fin.getline(name, STRING_SIZE);
        lineNums[i] = count;
    }

    for (int i = count - 5; i <= count && fin.getline(name, STRING_SIZE); i++)
        cout << i + 1 << ".) " << name << endl;
}