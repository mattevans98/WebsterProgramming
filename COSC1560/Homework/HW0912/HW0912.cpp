//*******************************************************************************************************
//
//		File:					HW0912.cpp
//
//		Student:				Matt Evans
//
//		Assignment:				Program #HW0912
//
//		Course Name:			Programming II
//
//		Course Number:			COSC 1560-01
//
//		Due:					9/14/22
//
//
//		This program calls that expands a dynamically allocated array
//
//		Other files required:
//			1.	none
//
//*******************************************************************************************************

#include <iostream>

using namespace std;

//*******************************************************************************************************

int *expand(int *, int);

//*******************************************************************************************************

int main()
{
	const int SIZE = 3;
	int *ptr = nullptr;
	ptr = new int[SIZE];

	ptr = expand(ptr, SIZE);

	return 0;
}

//*******************************************************************************************************

int *expand(int *ptr, int size)
{
	int newSize = size * 2;
	int *newPtr = nullptr;
	newPtr = new int[newSize];

	for (int i = 0; i < newSize; i++)
	{
		if (ptr[i])
			newPtr[i] = ptr[i];
		else
			newPtr[i] = 0;
	}

	return newPtr;
}

//*******************************************************************************************************