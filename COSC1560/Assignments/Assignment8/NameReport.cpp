//*******************************************************************************************************
//
//		File:					NameReport.cpp
//
//		Student:				Matt Evans
//
//		Assignment:				Program #A8
//
//		Course Name:			Programming II
//
//		Course Number:			COSC 1560-01
//
//		Due:					11/3/22
//
//
//		This program keeps track of a team's information
//
//		Other files required:
//			1.	names.txt
//
//*******************************************************************************************************

#include <iostream>
#include <fstream>
using namespace std;

//*******************************************************************************************************

int getChoice();
void handleMenu(ifstream &);
void displayFirstFive(ifstream &);
void displayLastFive(ifstream &);
int count(ifstream &);
void copyToFile(ifstream &, ofstream &);
void search(ifstream &);

//*******************************************************************************************************

int main()
{
    ifstream inFile;
    ofstream outFile;
    inFile.open("names.txt");
    outFile.open("names2.txt");
    int choice;

    do
    {
        choice = getChoice();
        handleMenu(inFile);
    } while (choice != 6);

    inFile.close();
    outFile.close();

    return 0;
}

//*******************************************************************************************************

int getChoice()
{
    int choice;

    cout << "1. Display the first five names" << endl;
    cout << "2. Display the last five names" << endl;
    cout << "3. Count the number of names" << endl;
    cout << "4. Copy Names to names_copy.txt" << endl;
    cout << "5. Search for a name" << endl;
    cout << "6. Quit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    return choice;
}

//*******************************************************************************************************

