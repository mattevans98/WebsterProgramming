//*******************************************************************************************************
//
//		File:					Employee.h
//
//		Student:				Matt Evans
//
//		Assignment:				Program #A10
//
//		Course Name:			Programming II
//
//		Course Number:			COSC 1560-01
//
//		Due:					11/21/22
//
//
//		This program takes input and displays output of data stored in Employee objects
//
//		Other files required:
//			1.	Employee.cpp
//          2.  EmployeeDriver.cpp
//
//*******************************************************************************************************

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>
using namespace std;

//*******************************************************************************************************

class Employee
{
private:
    int employeeNumber;
    string employeeName;
    double salary;

public:
    void setEmployeeNumber(int employeeNumber);
    void setEmployeeName(string employeeName);
    void setSalary(double salary);
    int getEmployeeNumber() const;
    string getEmployeeName() const;
    double getEmployeeSalary() const;
};

//*******************************************************************************************************

#endif
