//*******************************************************************************************************
//
//		File:					StudentInfo.cpp
//
//		Student:				Matt Evans
//
//		Assignment:				Program #A6
//
//		Course Name:			Programming II
//
//		Course Number:			COSC 1560-01
//
//		Due:					10/12/22
//
//
//		This program uses structures to keep track of students' info
//
//		Other files required:
//			1.	none
//
//*******************************************************************************************************

#include <iostream>
using namespace std;

//*******************************************************************************************************

struct Students
{
    char *name[81];
    int id;
    double grade;
};

//*******************************************************************************************************

void handler();
void editStudents(Students [], int);
void viewStudent(Students [], int);
void countStudent(Students [], int);
void deleteStudent(Students [], int);

//*******************************************************************************************************

int main()
{
    handler();
    return 0;
}

//*******************************************************************************************************

void handler()
{
    const int SIZE = 10;
    Students students[SIZE];
}

//*******************************************************************************************************