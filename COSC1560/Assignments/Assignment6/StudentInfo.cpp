//*******************************************************************************************************
//
//		File:					StudentInfo.cpp
//
//		Student:				Matt Evans
//
//		Assignment:				Program #A6
//
//		Course Name:			Programming II
//
//		Course Number:			COSC 1560-01
//
//		Due:					10/12/22
//
//
//		This program uses structures to keep track of students' info
//
//		Other files required:
//			1.	none
//
//*******************************************************************************************************

#include <iostream>
#include <cstring>
#include <string>
#include <cctype>
using namespace std;

//*******************************************************************************************************

struct Students
{
    string name;
    int id;
    double grade;
};

//*******************************************************************************************************

void handler();
void editStudent(Students [], int);
void viewStudent(Students [], int);
void countStudent(Students [], int);
void deleteStudent(Students [], int);

//*******************************************************************************************************

int main()
{
    handler();
    return 0;
}

//*******************************************************************************************************

void handler()
{
    const string LINE(60, '*');
    const int SIZE = 10;
    int choice;
    Students students[SIZE] = {
            {"-", 0, 0},
            {"-", 0, 0},
            {"-", 0, 0},
            {"-", 0, 0},
            {"-", 0, 0},
            {"-", 0, 0},
            {"-", 0, 0},
            {"-", 0, 0},
            {"-", 0, 0},
            {"-", 0, 0}
    };


    do
    {
        cout << LINE << endl;
        cout << "1) Edit a student" << endl;
        cout << "2) View student's info" << endl;
        cout << "3) Display a count of how many students are in the list." << endl;
        cout << "4) Delete a student" << endl;
        cout << "5) Quit" << endl;
        cout << "Please choose one of the options: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                editStudent(students, SIZE);
                break;
            case 2:
                viewStudent(students, SIZE);
                break;
            case 3:
                //countStudent(students, SIZE);
                break;
            case 4:
                //deleteStudent(students, SIZE);
                break;
            case 5:
                cout << "Finished!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);
}

//*******************************************************************************************************

void editStudent(Students students[], int size)
{
    int indexNum;

    cout << "Please enter an index: ";
    cin >> indexNum;
    cout << "Please enter a name: ";
    cin.ignore();
    getline(cin, students[indexNum].name, '\n');
    cout << "Please enter an ID: ";
    cin >> students[indexNum].id;
    cout << "Please enter a grade: ";
    cin >> students[indexNum].grade;
}

//*******************************************************************************************************

void viewStudent(Students students[], const int size)
{
    for (int i = 0; i < size; ++i)
        if (students[i].name != "-")
            cout << students[i].id << ". " << students[i].name << " " << students[i].grade << endl;
}

//*******************************************************************************************************