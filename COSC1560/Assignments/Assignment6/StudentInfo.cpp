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
using namespace std;

//*******************************************************************************************************

struct Students
{
    char name[81];
    int id;
    double grade;
};

//*******************************************************************************************************

void handler();
void editStudents(Students [], int);
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
    const int NUM_STARS = 81;
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

    for (int i = 0; i < NUM_STARS; ++i)
        cout << "*";

    cout << "1) Edit a student" << endl;
    cout << "2) View student's info" << endl;
    cout << "3) Display a count of how many students are in the list." << endl;
    cout << "4) Delete a student" << endl;
    cout << "5) Quit" << endl;
    cin >> choice;

    switch (choice)
    {
        case 1:
            editStudents(students, SIZE);
            break;
        case 2:
            viewStudent(students, SIZE);
            break;
        case 3:
            countStudent(students, SIZE);
            break;
        case 4:
            deleteStudent(students, SIZE);
            break;
        case 5:
            cout << "Finished!" << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            handler();
    }
}

//*******************************************************************************************************

void editStudent(Students students[], int size)
{
    int indexNum;

    cout << "Please enter an index: ";
    cin >> indexNum;
    cout << "Please enter a name: ";
    cin.getline(students[indexNum].name, 81);
    cout << "Please enter an ID: ";
    cin >> students[indexNum].id;
    cout << "Please enter a grade: ";
    cin >> students[indexNum].grade;
}

//*******************************************************************************************************

