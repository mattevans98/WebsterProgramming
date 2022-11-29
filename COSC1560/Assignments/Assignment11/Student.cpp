//*******************************************************************************************************
//
//		File:					Student.cpp
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
//		This program defines the Student ADT function members
//
//		Other files required:
//			1.	Student.h
//          2.  StudentDriver.cpp
//
//*******************************************************************************************************

#include "Student.h"

//*******************************************************************************************************

Student::Student()
{
    studentId = 0;
    studentName = new char[81];
    strcpy(studentName, "*none*");
    gpa = 0.0;
}

//*******************************************************************************************************

Student::Student(int studentId, char *studentName, double gpa)
{
    this->studentId = studentId;
    this->studentName = new char[strlen(studentName) + 1];
    strcpy(this->studentName, studentName);
    this->gpa = gpa;
}

//*******************************************************************************************************

Student::~Student()
{
    delete[] studentName;
}

//*******************************************************************************************************

void Student::setStudentId(int studentId)
{
    this->studentId = studentId;
}

//*******************************************************************************************************

void Student::setStudentName(char *studentName)
{
    delete[] this->studentName;
    this->studentName = new char[strlen(studentName) + 1];
    strcpy(this->studentName, studentName);
}

//*******************************************************************************************************

void Student::setGpa(double gpa)
{
    this->gpa = gpa;
}

//*******************************************************************************************************

int Student::getStudentId() const
{
    return studentId;
}

//*******************************************************************************************************

char *Student::getStudentName() const
{
    return studentName;
}

//*******************************************************************************************************

double Student::getGpa() const
{
    return gpa;
}

//*******************************************************************************************************