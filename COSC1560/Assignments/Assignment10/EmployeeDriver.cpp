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
bool validateInputRange(const T, T = 0);
void inputPrompt(Employee &);
void display(Employee &);

//*******************************************************************************************************

int main()
{
    Employee myColleague;

    myColleague.setEmployeeNumber(1);
    myColleague.setEmployeeName("John Doe");
    myColleague.setSalary(3067.5);

    Employee myself;
    myself.setEmployeeNumber(2);
    cout << "Please enter information about employee 2: " << endl;
    inputPrompt(myself);

    cout << string(40, '*') << endl;
    cout << "Employee 1:" << endl;
    display(myColleague);
    cout << endl << "Employee 2:" << endl;
    display(myself);

    return 0;
}

//*******************************************************************************************************

template<typename T>
bool validateInputRange(const T input, T min)
{
    bool isValid;

    if (input >= min)
    {
        isValid = true;
    }
    else
    {
        isValid = false;
        cout << "Error! Input must be more >= " << min << ". Try again: ";
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
        cin >> employeeNumber;
    myColleague.setEmployeeNumber(employeeNumber);

    cout << "Enter the employee name: ";
    cin.ignore();
    getline(cin, employeeName);
    myColleague.setEmployeeName(employeeName);

    cout << "Enter the employee salary: ";
    cin >> salary;
    while (!validateInputRange(salary, 0.0))
        cin >> salary;
    myColleague.setSalary(salary);
}

//*******************************************************************************************************

void display(Employee &employee)
{
    cout << employee.getEmployeeNumber() << endl;
    cout << employee.getEmployeeName() << endl;
    cout << employee.getEmployeeSalary() << endl;
}

//*******************************************************************************************************