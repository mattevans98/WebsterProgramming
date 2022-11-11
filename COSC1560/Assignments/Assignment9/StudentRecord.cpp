//*******************************************************************************************************
//
//		File:					StudentRecord.cpp
//
//		Student:				Matt Evans
//
//		Assignment:				Program #A9
//
//		Course Name:			Programming II
//
//		Course Number:			COSC 1560-01
//
//		Due:					11/11/22
//
//
//		This program reads and writes student records to a file
//
//		Other files required:
//			1.	record.dat
//
//*******************************************************************************************************

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

//*******************************************************************************************************

template<typename T>
bool validateInput(const T, T, T);

const int STRING_SIZE = 51;

//*******************************************************************************************************

struct Student
{
    char name[STRING_SIZE];
    char address[STRING_SIZE];
    double gpa;
    int id;
};

//*******************************************************************************************************

int getChoice();
void handleMenu();
void callChoice(int);
void enterRecord();
void displayOneRecord();
int countRecord();
void displayAllRecords();

//*******************************************************************************************************

int main()
{
    handleMenu();
    return 0;
}

//*******************************************************************************************************

template<typename T>
bool validateInput(const T input, const T MIN, const T MAX)
{
    bool isValid;
    if (input < MIN || input > MAX)
        isValid = false;
    else
        isValid = true;

    return isValid;
}

//*******************************************************************************************************

void handleMenu()
{
    int choice;
    cout << string(STRING_SIZE, '*') << endl;
    cout << setw(5) << left << "1." << "Enter new records into the file." << endl;
    cout << setw(5) << "2." << setw(5) <<
         "Search for a particular Student record and display it." << endl;
    cout << setw(5) << "3." << setw(5) << "Count student records." << endl;
    cout << setw(5) << "4." << setw(5) << "Display all records." << endl;
    cout << setw(5) << "5." << setw(5) << "Quit." << endl;
    cout << endl;

    choice = getChoice();

    callChoice(choice);
}

//*******************************************************************************************************

int getChoice()
{
    const int MIN = 1, MAX = 5;
    int choice;

    cout << "Please enter: ";
    cin >> choice;

    while (!validateInput(choice, MIN, MAX))
    {
        cout << "Invalid input: Enter again: ";
        cin >> choice;
    }

    return choice;
}

//*******************************************************************************************************

void callChoice(const int choice)
{
    switch (choice)
    {
        case 1:
            enterRecord();
            break;
        case 2:
            displayOneRecord();
            break;
        case 3:
            countRecord();
            break;
        case 4:
            displayAllRecords();
            break;
        case 5:
            break;
        default:
            cout << "Choice call was invalid." << endl;
    }
}

//*******************************************************************************************************

void enterRecord()
{
    fstream file("record.dat", ios::app | ios::binary);
    Student s;

    cout << "Enter Student name: ";
    cin.getline(s.name, STRING_SIZE);
    cout << "Enter Student address: ";
    cin.getline(s.address, STRING_SIZE);
    cout << "Student ID: ";
    cin >> s.id;
    cout << "Enter GPA: ";
    cin >> s.gpa;

    file.write(reinterpret_cast<char *>(&s), sizeof(s));

    file.close();
}

//*******************************************************************************************************