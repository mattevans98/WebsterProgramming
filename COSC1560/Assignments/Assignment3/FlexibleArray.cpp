//*******************************************************************************************************
//
//		File:					FlexibleArray.cpp
//
//		Student:				Matt Evans
//
//		Assignment:				Program #A3
//
//		Course Name:			Programming II
//
//		Course Number:			COSC 1560-01
//
//		Due:					9/16/22
//
//
//		This program manipulates a dynamically allocated array using pointers
//
//		Other files required:
//			1.	none
//
//*******************************************************************************************************

#include <iostream>
using namespace std;

//*******************************************************************************************************

int *getData(int);
void display(const int *, int);
void reverse(int *const, int);
int *expand(int *, int);
int *shift(int *, int);

//*******************************************************************************************************

int main()
{
	int size;
	int *ptr = nullptr;

	cout << "Please enter a size: ";
	cin >> size;

	ptr = getData(size);


	delete[] ptr;
	return 0;
}

int *getData(int size)
{
	int *pArray = new int[size];

	cout << "Enter all values now";
	for (int i = 0; i < size; i++)
	{
		cout << "Value " << i + 1 << ": ";
		cin >> pArray[i];
	}

	return pArray;
}