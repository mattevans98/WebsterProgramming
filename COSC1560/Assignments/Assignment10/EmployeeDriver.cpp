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
bool validateInput(const T, T = 0, T = 9999999);
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
bool validateInputRange(const T input, T min = 0, T max = 999)
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

void inputPrompt(Employee &myColleague)
{
    int employeeNumber;
    string employeeName;
    double salary;

    cout << "Enter the employee number: ";
    cin >> employeeNumber;
    while (!validateInputRange(employeeNumber, 1))
    {
        cout << "Invalid input. Enter a number between 0 and 9999: ";
        cin >> employeeNumber;
    }
    myColleague.setEmployeeNumber(employeeNumber);

    cout << "Enter the employee name: ";
    cin >> employeeName;
    myColleague.setEmployeeName(employeeName);

    cout << "Enter the employee salary: ";
    cin >> salary;
    while (!validateInputRange(salary, 0.0))
    {
        cout << "Invalid input. Enter a number between 0 and 9999: ";
        cin >> salary;
    }
    myColleague.setSalary(salary);
}

//*******************************************************************************************************