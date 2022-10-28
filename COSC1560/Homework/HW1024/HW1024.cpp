//*******************************************************************************************************
//
//		File:					HW1024.cpp
//
//		Student:				Matt Evans
//
//		Assignment:				Program #HW1024
//
//		Course Name:			Programming II
//
//		Course Number:			COSC 1560-01
//
//		Due:					10/26/22
//
//
//		This program answers questions 11.11 - 11.15 in the book
//
//		Other files required:
//			1.	none
//
//*******************************************************************************************************

#include <iostream>
using namespace std;

//*******************************************************************************************************

struct Rectangle
{
    int length;
    int width;
};

//*******************************************************************************************************

void display(const Rectangle &);
void getInput(Rectangle &);
Rectangle getRectangle();

//*******************************************************************************************************

int main()
{
    // 11.14
    Rectangle *rptr = new Rectangle;

    delete rptr;
    return 0;
}

//*******************************************************************************************************

// 11.11
void display(const Rectangle &r)
{
    cout << "Length: " << r.length << endl;
    cout << "Width: " << r.width << endl;
}

//*******************************************************************************************************

// 11.12
void getInput(Rectangle &r)
{
    cout << "Enter the length: ";
    cin >> r.length;
    cout << "Enter the width: ";
    cin >> r.width;
}

//*******************************************************************************************************

// 11.13
Rectangle getRectangle()
{
    Rectangle r;
    getInput(r);

    return r;
}

//*******************************************************************************************************

// 11.15
// Answer is B