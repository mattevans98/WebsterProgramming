//*******************************************************************************************************
//
//		File:					StudentRecord.cpp
//
//		Student:				Matt Evans
//
//		Assignment:				Program #A9
//
//		Course Name:			Programming II
//
//		Course Number:			COSC 1560-01
//
//		Due:					11/11/22
//
//
//		This program reads and writes student records to a file
//
//		Other files required:
//			1.	record.dat
//
//*******************************************************************************************************

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

//*******************************************************************************************************

const int STRING_SIZE = 51;

//*******************************************************************************************************

struct Student
{
    char name[STRING_SIZE];
    char address[STRING_SIZE];
    double gpa;
    int id;
};

//*******************************************************************************************************

int getChoice();
void handleMenu();
void enterRecord();
void displayOneRecord();
int countRecord();
void displayAllRecords();

//*******************************************************************************************************

int main()
{
    handleMenu();
    return 0;
}

//*******************************************************************************************************

void handleMenu()
{
    cout << string(STRING_SIZE, '*') << endl;
    cout << setw(5) << left << "1." << "Enter new records into the file." << endl;
    cout << setw(5) << "2." << setw(5) <<
         "Search for a particular Student record and display it." << endl;
    cout << setw(5) << "3." << setw(5) << "Count student records." << endl;
    cout << setw(5) << "4." << setw(5) << "Display all records." << endl;
    cout << setw(5) << "5." << setw(5) << "Quit." << endl;
    cout << endl;
}

//*******************************************************************************************************