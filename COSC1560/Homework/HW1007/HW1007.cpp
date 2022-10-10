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
    SavingsAcct myAcct = {
            "My savings account",
            1000000.0,
            0.019,
            875000
    };

    return 0;
}