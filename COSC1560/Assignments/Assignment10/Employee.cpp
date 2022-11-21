//*******************************************************************************************************
//
//		File:					Employee.cpp
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
//		his program takes input and displays output of data stored in Employee objects
//
//		Other files required:
//			1.	EmployeeDriver.cpp
//          2.  Employee.h
//
//*******************************************************************************************************

#include "Employee.h"

//*******************************************************************************************************

void Employee::setEmployeeNumber(int employeeNumber)
{
    this->employeeNumber = employeeNumber;
}

//*******************************************************************************************************

void Employee::setEmployeeName(string employeeName)
{
    this->employeeName = employeeName;
}

//*******************************************************************************************************

void Employee::setSalary(double salary)
{
    this->salary = salary;
}

//*******************************************************************************************************

int Employee::getEmployeeNumber() const
{
    return employeeNumber;
}

//*******************************************************************************************************

string Employee::getEmployeeName() const
{
    return employeeName;
}

//*******************************************************************************************************

double Employee::getEmployeeSalary() const
{
    return salary;
}

//*******************************************************************************************************