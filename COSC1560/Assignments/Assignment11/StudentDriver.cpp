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
//		This program manipulates data from the Student ADT
//
//		Other files required:
//			1.	Student.h
//          2.  Student.cpp
//
//*******************************************************************************************************

#include "Student.h"
#include <iomanip>
using namespace std;

//*******************************************************************************************************

void displayAllStudentRecords(Student *, const int);
void getInput(Student *, const int);
int getValidatedId();
double getValidatedGpa();

//*******************************************************************************************************

int main()
{
    const int SIZE = 3;

    Student *students = new Student[SIZE];
    getInput(students, SIZE);
    displayAllStudentRecords(students, SIZE);

    delete[] students;

    return 0;
}

//*******************************************************************************************************

void displayAllStudentRecords(Student *students, const int size)
{
    cout << left << setw(25) << "Student Name";
    cout << setw(25) << "Student ID";
    cout << setw(25) << "GPA" << endl;
    cout << string(60, '*') << endl;
    for (int i = 0; i < size; i++)
    {
        cout << setw(25) << students[i].getStudentName();
        cout << setw(25) << students[i].getStudentId();
        cout << setw(25) << setprecision(2) << fixed << students[i].getGpa() << endl;
    }
}

//*******************************************************************************************************

void getInput(Student *students, const int size)
{
    int studentId;
    char studentName[81];
    double gpa;

    for (int i = 0; i < size; i++)
    {
        cout << "Please enter information for student " << i + 1 << endl;
        cout << "Please enter name: ";
        cin.getline(studentName, 81);
        studentId = getValidatedId();
        gpa = getValidatedGpa();
        cin.ignore();
        students[i].setStudentName(studentName);
        students[i].setStudentId(studentId);
        students[i].setGpa(gpa);
    }
}

//*******************************************************************************************************

int getValidatedId()
{
    int studentId;
    bool valid = false;

    do
    {
        cout << "Please enter ID: ";
        cin >> studentId;
        if (studentId < 1000 || studentId > 2000)
            cout << "Error: ID must be between 1000 and 2000." << endl;
        else
            valid = true;
    } while (!valid);

    return studentId;
}

//*******************************************************************************************************

double getValidatedGpa()
{
    double gpa;
    bool valid = false;

    do
    {
        cout << "Please enter GPA: ";
        cin >> gpa;
        if (gpa < 0.0 || gpa > 4.0)
            cout << "Error: GPA must be between 0.0 and 4.0." << endl;
        else
            valid = true;
    } while (!valid);

    return gpa;
}

//*******************************************************************************************************

// Output:
/*
Please enter information for student 1
Please enter name: John Doe
Please enter ID: 100001
Error: ID must be between 1000 and 2000.
Please enter ID: 1001
Please enter GPA: 4.5
Error: GPA must be between 0.0 and 4.0.
Please enter GPA: 3.5
Please enter information for student 2
Please enter name: Jane Doe
Please enter ID: 1002
Please enter GPA: 3.0
Please enter information for student 3
Please enter name: Joe Doe
Please enter ID: -1
Error: ID must be between 1000 and 2000.
Please enter ID: 1003
Please enter GPA: 2.9
Student Name             Student ID               GPA
************************************************************
John Doe                 1001                     3.50
Jane Doe                 1002                     3.00
Joe Doe                  1003                     2.90
1003, Joe Doe removed
1002, Jane Doe removed
1001, John Doe removed

Process finished with exit code 0
*/