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