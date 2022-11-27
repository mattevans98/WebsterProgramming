//*******************************************************************************************************
//
//		File:					HW1123.cpp
//
//		Student:				Matt Evans
//
//		Assignment:				Program #HW1123
//
//		Course Name:			Programming II
//
//		Course Number:			COSC 1560-01
//
//		Due:					11/28/22
//
//
//		This program completes the program from problem 13.26 in the textbook
//
//		Other files required:
//			1.	none
//
//*******************************************************************************************************

#include <iostream>
using namespace std;

//*******************************************************************************************************

class Yard
{
private:
    int length;
    int width;
public:
    Yard()
    {
        length = 0;
        width = 0;
    }

    void setLength(int len)
    {
        length = len;
    }

    void setWidth(int w)
    {
        width = w;
    }
};

//*******************************************************************************************************

int main()
{
    Yard yards[3];

    for (auto &yard: yards)
    {
        int len, w;
        cout << "Enter the length of the yard: ";
        cin >> len;
        yard.setLength(len);
        cout << "Enter the width of the yard: ";
        cin >> w;
        yard.setWidth(w);
    }
}

//*******************************************************************************************************