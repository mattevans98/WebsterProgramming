//*******************************************************************************************************
//
//		File:					EmployeeDriver.cpp
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
//			1.	Employee.cpp
//          2.  Employee.h
//
//*******************************************************************************************************

#include "Employee.h"

//*******************************************************************************************************

template<typename T>
bool validateInput(const T, T = 0, T = 9999);
void inputPrompt(Employee &);

//*******************************************************************************************************

int main()
{
    Employee myColleague;

    int employeeNumber;
    string employeeName;
    double salary;


    return 0;
}

//*******************************************************************************************************

template<typename T>
bool validateInputRange(const T input, T min, T max)
{
    bool isValid;

    if (input >= min && input <= max)
    {
        isValid = true;
    }
    else
    {
        isValid = false;
    }

    return isValid;
}

//*******************************************************************************************************

