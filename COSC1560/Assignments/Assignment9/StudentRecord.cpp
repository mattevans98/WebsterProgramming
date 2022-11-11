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

    do
    {
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
        cout << endl;
    } while (choice != 5);
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

void callChoice(int choice)
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
            cout << "There are " << countRecord() << " student records in the file." << endl;
            break;
        case 4:
            displayAllRecords();
            break;
        default:
            cout << "Goodbye" << endl;
    }
}

//*******************************************************************************************************

void enterRecord()
{
    fstream file("record.dat", ios::app | ios::binary);
    Student s;

    cin.ignore();
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

void displayOneRecord()
{
    fstream file("record.dat", ios::in | ios::binary);
    Student s;
    long size = sizeof(s);
    int record;

    if (!file.fail())
    {
        cout << "Enter record number: ";
        cin >> record;

        file.seekg(record * size, ios::beg);
        file.read(reinterpret_cast<char *>(&s), size);
        cout << "Name: " << s.name << endl;
        cout << "Address: " << s.address << endl;
        cout << "ID: " << s.id << endl;
        cout << "GPA: " << s.gpa << endl;
        cout << endl;
        file.close();
    }
    else
        cout << "File failed to open." << endl;
}

//*******************************************************************************************************

int countRecord()
{
    fstream file("record.dat", ios::in | ios::binary);
    Student s;
    int count = 0;

    if (!file.fail())
    {
        file.seekg(0, ios::beg);
        while (file.read(reinterpret_cast<char *>(&s), sizeof(s)))
            count++;
        file.close();
    }
    else
        cout << "File failed to open." << endl;

    return count;
}

//*******************************************************************************************************

void displayAllRecords()
{
    fstream file("record.dat", ios::in | ios::binary);
    Student s;

    if (!file.fail())
    {
        file.seekg(0, ios::beg);
        while (file.read(reinterpret_cast<char *>(&s), sizeof(s)))
        {
            cout << "Student name: " << s.name << endl;
            cout << "Student address: " << s.address << endl;
            cout << "Student ID: " << s.id << endl;
            cout << "Student GPA: " << s.gpa << endl;
        }
        file.close();
    }
    else
        cout << "File failed to open." << endl;
}

//*******************************************************************************************************

// Output:

/*
***************************************************
1.   Enter new records into the file.
2.   Search for a particular Student record and display it.
3.   Count student records.
4.   Display all records.
5.   Quit.

Please enter: 3
There are 8 student records in the file.

***************************************************
1.   Enter new records into the file.
2.   Search for a particular Student record and display it.
3.   Count student records.
4.   Display all records.
5.   Quit.

Please enter: 1
Enter Student name: Jane Doe
Enter Student address: 520 Gorlock Ave.
Student ID: 10001
Enter GPA: 2.7

***************************************************
1.   Enter new records into the file.
2.   Search for a particular Student record and display it.
3.   Count student records.
4.   Display all records.
5.   Quit.

Please enter: 3
There are 9 student records in the file.

***************************************************
1.   Enter new records into the file.
2.   Search for a particular Student record and display it.
3.   Count student records.
4.   Display all records.
5.   Quit.

Please enter: 2
Enter record number: 3
Name: Robert Rodriguez
Address: 920 East Webster Ave.
ID: 93197
GPA: 2.5


***************************************************
1.   Enter new records into the file.
2.   Search for a particular Student record and display it.
3.   Count student records.
4.   Display all records.
5.   Quit.

Please enter: 4
Student name: John Doe
Student address: 52 Webster Dr.
Student ID: 34124
Student GPA: 3.4
Student name: Thomas Williams
Student address: 140 Garden Ave.
Student ID: 29521
Student GPA: 3.1
Student name: Jane Adams
Student address: 1678 Lockwood Ave.
Student ID: 42124
Student GPA: 2.9
Student name: Robert Rodriguez
Student address: 920 East Webster Ave.
Student ID: 93197
Student GPA: 2.5
Student name: Janet Doe
Student address: 431 Conrrett Dr.
Student ID: 10051
Student GPA: 3.7
Student name: Jane Doe
Student address: 520 Gorlock Ave.
Student ID: 10001
Student GPA: 2.7
Student name: Jane Doe
Student address: 520 Gorlock Ave.
Student ID: 10001
Student GPA: 2.7
Student name: Jane Doe
Student address: 520 Gorlock Ave.
Student ID: 10001
Student GPA: 2.7
Student name: Jane Doe
Student address: 520 Gorlock Ave.
Student ID: 10001
Student GPA: 2.7

***************************************************
1.   Enter new records into the file.
2.   Search for a particular Student record and display it.
3.   Count student records.
4.   Display all records.
5.   Quit.

Please enter: 5
Goodbye


Process finished with exit code 0
*/