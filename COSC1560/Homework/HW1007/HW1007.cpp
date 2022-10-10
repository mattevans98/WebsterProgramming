//*******************************************************************************************************
//
//		File:					HW1007.cpp
//
//		Student:				Matt Evans
//
//		Assignment:				Program #HW1007
//
//		Course Name:			Programming II
//
//		Course Number:			COSC 1560-01
//
//		Due:					10/10/22
//
//
//		This program answers questions 11.1 and 11.2 in the textbook
//
//		Other files required:
//			1.	none
//
//*******************************************************************************************************

#include <iostream>
using namespace std;

//*******************************************************************************************************

// Problem 11.1
struct SavingsAcct
{
    string acctNum;
    double balance;
    double interestRate;
    double avgMonthlyBalance;
};

//*******************************************************************************************************

int main()
{
    // Problem 11.2
    SavingsAcct myAcct = {
            "ACZ42137-B12-7",
            4512.59,
            0.04,
            4217.07
    };

    return 0;
}