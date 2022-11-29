//*******************************************************************************************************
//
//		File:					StudentDriver.cpp
//
//		Student:				Matt Evans
//
//		Assignment:				Program #A11
//
//		Course Name:			Programming II
//
//		Course Number:			COSC 1560-01
//
//		Due:					11/30/22
//
//
//		This program declares the Student ADT
//
//		Other files required:
//			1.	Student.h
//          2.  Student.cpp
//
//*******************************************************************************************************

#include "Student.h"
#include <iostream>
#include <iomanip>
using namespace std;

//*******************************************************************************************************

const int SIZE = 5;

//*******************************************************************************************************

void displayAllStudentRecords(Student *, const int);
void getInput(Student *, const int);

//*******************************************************************************************************

int main()
{
    Student *students = new Student[SIZE];
    displayAllStudentRecords(students, SIZE);

    return 0;
}

//*******************************************************************************************************

void displayAllStudentRecords(Student *student, const int size)
{
    cout << left << setw(25) << "Student Name";
    cout << setw(25) << "Student ID";
    cout << setw(25) << "GPA" << endl;
    cout << string(60, '*') << endl;
}