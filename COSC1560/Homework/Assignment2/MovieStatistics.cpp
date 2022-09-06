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
#include <iomanip>
#include <cmath>

using namespace std;

//*******************************************************************************************************

void display();

void getAllData(int *, int);

int getAverage(const int *, int);

int getMin(const int *, int);

void displayAllValue(const int *, int);

void bubbleSort(int *, int);

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
	cout << "All values entered: " << endl;
	displayAllValue(ptr, SIZE);
	cout << "Students watched " << getAverage(ptr, SIZE) << " movies in average last month"
		 << endl << endl;
	cout << "Minimum number of movies watched was: " << getMin(ptr, SIZE) << endl << endl;
	bubbleSort(ptr, SIZE);
	cout << "All values sorted: " << endl;
	displayAllValue(ptr, SIZE);
}

//*******************************************************************************************************

void getAllData(int *pArray, int size)
{
	cout << "Enter all movie data: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "Student #" << i + 1 << ": ";
		cin >> *(pArray + i);
	}
	cout << endl;
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

void displayAllValue(const int *pArray, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (i == size / 2)
			cout << endl << setw(0);
		cout << pArray[i] << setw(5);
	}

	cout << setw(0) << endl << endl;
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

void bubbleSort(int *const pArray, int size)
{
	int comparison = size - 1;

	for (; comparison > 0; comparison--)
		for (int i = 0; i < comparison; i++)
		{
			if (pArray[i] > pArray[i + 1])
				swap(pArray[i], pArray[i + 1]);
		}
}

//*******************************************************************************************************

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//*******************************************************************************************************

//Output:

/*
Enter all movie data:
Student #1: 3
Student #2: 4
Student #3: 2
Student #4: 1
Student #5: 0
Student #6: 15
Student #7: 9
Student #8: 3
Student #9: 4
Student #10: 2

All values entered:
3    4    2    1    0
15    9    3    4    2

Students watched 4 movies in average last month

Minimum number of movies watched was: 0

All values sorted:
0    1    2    2    3
3    4    4    9   15

*/