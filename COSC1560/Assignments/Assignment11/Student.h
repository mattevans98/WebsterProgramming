//*******************************************************************************************************
//
//		File:					Student.h
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
//			1.	Student.cpp
//          2.  StudentDriver.cpp
//
//*******************************************************************************************************

#ifndef STUDENT_H
#define STUDENT_H

#include <cstring>
#include <iostream>

//*******************************************************************************************************

class Student
{
private:
    int studentId;
    char *studentName;
    double gpa;
public:
    Student();
    Student(int, char *, double);
    ~Student();
    void setStudentId(int);
    void setStudentName(char *);
    void setGpa(double);
    int getStudentId() const;
    char *getStudentName() const;
    double getGpa() const;
};

//*******************************************************************************************************

#endif
