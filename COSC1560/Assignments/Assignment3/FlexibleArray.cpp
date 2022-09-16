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
#include <iomanip>
using namespace std;

//*******************************************************************************************************

int *getData(int);
void display(int *, int);
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
	display(ptr, size);

	delete[] ptr;
	return 0;
}

//*******************************************************************************************************

int *getData(int size)
{
	int *pArray = new int[size];

	cout << "Enter all values now" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "Value " << i + 1 << ": ";
		cin >> pArray[i];
	}

	return pArray;
}

//*******************************************************************************************************

void display(int *ptr, int size)
{
	const int MAX_LINES = 5;

	cout << "All values are:" << endl;
	for (int i = 0; i < size; i++)
	{
		if (i == MAX_LINES)
			cout << endl;
		cout << left << setw(5) << ptr[i];
	}
}