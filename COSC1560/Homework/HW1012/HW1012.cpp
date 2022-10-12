//*******************************************************************************************************
//
//		File:					HW1012.cpp
//
//		Student:				Matt Evans
//
//		Assignment:				Program #HW1012
//
//		Course Name:			Programming II
//
//		Course Number:			COSC 1560-01
//
//		Due:					10/14/22
//
//
//		This program uses 3 different ways to access pointer members of a structure
//
//		Other files required:
//			1.	none
//
//*******************************************************************************************************

#include <iostream>
using namespace std;

//*******************************************************************************************************

struct Student
{
    string name;
    int id;
    double grade;
};

struct Course
{
    Student *p;
    int size;
};

//*******************************************************************************************************

int main()
{
    Course myCourse;
    cin >> myCourse.size;
    myCourse.p = new Student[myCourse.size];

    for (int i = 0; i < myCourse.size; i++)
    {
        getline(cin, myCourse.p[i].name); // 1st way
        cin >> (*(myCourse.p + i)).id;           // 2nd way
        cin >> (myCourse.p + i)->grade;        // 3rd way
    }

    delete[] myCourse.p;
    myCourse.p = nullptr;

    return 0;
}

//*******************************************************************************************************