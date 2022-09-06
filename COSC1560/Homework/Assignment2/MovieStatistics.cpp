//*******************************************************************************************************
//
//		File:					MovieStatistics.cpp
//
//		Student:				Matt Evans
//
//		Assignment:				Program #A2
//
//		Course Name:			Programming II
//
//		Course Number:			COSC 1560-01
//
//		Due:					9/9/22
//
//
//		This program gathers statistics about movies that college students see.
//
//		Other files required:
//			1.	none
//
//*******************************************************************************************************

#include <iostream>

using namespace std;

//*******************************************************************************************************

// void display();

void getAllData(int *, int);

int getAverage(const int *, int);

int getMin(const int *, int);

void displayAllValue(const int *, int);

void bubbleSort(int *, int);

void swap(int *, int *);

//*******************************************************************************************************

int main()
{
	const int SIZE = 10;
	int movies[SIZE];
	int *ptr = movies;

	getAllData(ptr, SIZE);

	return 0;
}

//*******************************************************************************************************

void getAllData(int *pArray, int size)
{
	cout << "Enter all movie data" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "Student #" << i + 1 << ": ";
		cin >> *(pArray + i);
	}
}

//*******************************************************************************************************

//Output:
