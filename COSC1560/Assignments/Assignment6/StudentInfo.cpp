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
#include <string>
using namespace std;

//*******************************************************************************************************

const int STRING_SIZE = 81;

struct Students
{
    char name[STRING_SIZE];
    int id;
    double grade;
};

//*******************************************************************************************************

void handler();
void editStudent(Students [], int);
void viewStudent(const Students [], int);
void countStudent(const Students [], int);
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
        cout << endl;

        switch (choice)
        {
            case 1:
                editStudent(students, SIZE);
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
    cin.getline(students[indexNum].name, 81);
    cout << "Please enter an ID: ";
    cin >> students[indexNum].id;
    cout << "Please enter a grade: ";
    cin >> students[indexNum].grade;
    cout << endl;
}

//*******************************************************************************************************

void viewStudent(const Students students[], const int size)
{
    for (int i = 0; i < size; ++i)
        if (strcmp(students[i].name, "-") != 0)
            cout << students[i].id << ". " << students[i].name << " " <<
                 students[i].grade << endl;

    cout << endl;
}

//*******************************************************************************************************

void countStudent(const Students students[], int size)
{
    int count = 0;
    for (int i = 0; i < size; ++i)
        if (strcmp(students[i].name, "-") != 0)
            count++;
    cout << "There " << (count == 1 ? "is " : "are ") << count
         << (count == 1 ? " student" : " students") << endl << endl;
}

//*******************************************************************************************************

void deleteStudent(Students students[], int size)
{
    int indexNum;

    cout << "Enter an index: ";
    cin >> indexNum;
    while (indexNum > 9 || indexNum < 1)
    {
        cout << "There is no such student on that index. Please re-enter: ";
        cin >> indexNum;
    }
    strcpy(students[indexNum].name, "-");
    students[indexNum].id = 0;
    students[indexNum].grade = 0;
    cout << "deleted" << endl << endl;
}

//*******************************************************************************************************

// Output

/*
************************************************************
1) Edit a student
2) View student's info
3) Display a count of how many students are in the list.
4) Delete a student
5) Quit
Please choose one of the options: 1

Please enter an index: 1
Please enter a name: John Doe
Please enter an ID: 1001
Please enter a grade: 90

************************************************************
1) Edit a student
2) View student's info
3) Display a count of how many students are in the list.
4) Delete a student
5) Quit
Please choose one of the options: 1

Please enter an index: 2
Please enter a name: Jane Doe
Please enter an ID: 1002
Please enter a grade: 79

************************************************************
1) Edit a student
2) View student's info
3) Display a count of how many students are in the list.
4) Delete a student
5) Quit
Please choose one of the options: 2

1001. John Doe 90
1002. Jane Doe 79

************************************************************
1) Edit a student
2) View student's info
3) Display a count of how many students are in the list.
4) Delete a student
5) Quit
Please choose one of the options: 3

There are 2 students

************************************************************
1) Edit a student
2) View student's info
3) Display a count of how many students are in the list.
4) Delete a student
5) Quit
Please choose one of the options: 4

Enter an index: 0
There is no such student on that index. Please re-enter: 2
deleted

************************************************************
1) Edit a student
2) View student's info
3) Display a count of how many students are in the list.
4) Delete a student
5) Quit
Please choose one of the options: 2

1001. John Doe 90

************************************************************
1) Edit a student
2) View student's info
3) Display a count of how many students are in the list.
4) Delete a student
5) Quit
Please choose one of the options: 5

Finished!

Process finished with exit code 0
*/