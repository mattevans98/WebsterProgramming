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
using namespace  std;

int *expand(int *, int);

//*******************************************************************************************************

int main()
{
	const int SIZE = 5; // Size not constant
	int *ptr = new int[SIZE]{3, 4, 5, 7, 9,};
	ptr = expand(ptr, SIZE);

	for (int i = 0; i < SIZE * 2; i++)
	{
		cout << ptr[i] << endl;
	}

	delete[] ptr;

	return 0;
}

//*******************************************************************************************************

int *expand(int *ptr, int size)
{
	int newSize = size * 2;
	int *newPtr = nullptr;
	newPtr = new int[newSize];

	for (int i = 0; i < newSize; i++)
		i <  size ? newPtr[i] = ptr[i] : newPtr[i] = 0;

	return newPtr;
}

//*******************************************************************************************************