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
#include <cmath>

using namespace std;

//*******************************************************************************************************

void display();

void getAllData(int *, int);

int getAverage(const int *, int);

int getMin(const int *, int);

void displayAllValue(const int *, int);

void bubbleSort(const int *, int);

void swap(int *, int *);

//*******************************************************************************************************

int main()
{
	display();

	return 0;
}

//*******************************************************************************************************

void display()
{
	const int SIZE = 10;
	int movies[SIZE];
	int *ptr = movies;

	getAllData(ptr, SIZE);
	cout << "Students watched " << getAverage(ptr, SIZE) << " movies in average last month"
		 << endl;
	// displayAllValue(ptr, SIZE);
	cout << "Minimum number of movies watched was: " << getMin(ptr, SIZE) << endl;
	// bubbleSort(ptr, SIZE);
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

int getAverage(const int *pArray, int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
		sum += pArray[i];

	return round(sum / size);
}

//*******************************************************************************************************

int getMin(const int *pArray, int size)
{
	int lowest = pArray[0];

	for (int i = 1; i < size; i++)
		if (lowest > pArray[i])
			lowest = pArray[i];

	return lowest;
}

//*******************************************************************************************************
/*
void bubbleSort(const int * pArray, int size)
{
	int comparison = size - 1;

	for (; comparison > 0; comparison--)
		for (int i = 0; i < comparison; i++)
		{
			if (pArray[i] > pArray[i + 1])
				swap(pArray[i], pArray[i + 1]);
		}
}
*/
//*******************************************************************************************************
/*
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
*/
//*******************************************************************************************************

//Output:
