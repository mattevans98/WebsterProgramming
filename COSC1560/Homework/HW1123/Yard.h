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
//		This program completes declares the Yard ADT
//
//		Other files required:
//			1.	Yard.cpp
//			2.	YardDriver.cpp
//
//*******************************************************************************************************

#ifndef YARD_H
#define YARD_H

//*******************************************************************************************************

class Yard
{
private:
    int length;
    int width;
public:
    Yard();
    void setLength(int);
    void setWidth(int);
};

//*******************************************************************************************************

#endif
