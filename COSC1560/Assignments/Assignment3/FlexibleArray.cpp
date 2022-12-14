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

enum displayType
{
	INPUT,
	REVERSED,
	EXPANDED,
	SHIFTED
};

//*******************************************************************************************************

int *getData(int);
void display(const int *, int, displayType);
void reverse(int *const, int);
int *expand(int *, int &);
int *shift(int *, int &);
void swap(int &, int &);

//*******************************************************************************************************

int main()
{
	displayType type;
	int size;
	int *ptr = nullptr;

	cout << "Please enter a size: ";
	cin >> size;

	while (size < 2 || size > 10)
	{
		cout << "Please enter a size bewteen 2 and 10: ";
		cin >> size;
	}

	ptr = getData(size);
	type = INPUT;
	display(ptr, size, type);

	reverse(ptr, size);
	type = REVERSED;
	display(ptr, size, type);

	ptr = expand(ptr, size);
	type = EXPANDED;
	display(ptr, size, type);

	ptr = shift(ptr, size);
	type = SHIFTED;
	display(ptr, size, type);

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

void display(const int *ptr, int size, displayType type)
{
	const int MAX_LINES = 5;

	cout << endl;

	switch (type)
	{
		case INPUT:
			cout << "All values are:" << endl;
			break;
		case REVERSED:
			cout << "After reversing, all values are:" << endl;
			break;
		case EXPANDED:
			cout << "After expanding, all values are:" << endl;
			break;
		case SHIFTED:
			cout << "After shifting, all values are:" << endl;
			break;
		default:
			cout << "Your switch statement is broken lol" << endl;
	}

	for (int i = 0; i < size; i++)
	{
		if (i == MAX_LINES)
			cout << endl;
		cout << left << setw(5) << ptr[i];
	}
	cout << endl;
}

//*******************************************************************************************************

void reverse(int *const ptr, int size)
{
	int temp;

	for (int i = 0; i < size / 2; i++)
		swap(ptr[i], ptr[size - i - 1]);
}

//*******************************************************************************************************

int *expand(int *ptr, int &size)
{
	size *= 2;
	int *pNewArr = new int[size];

	for (int i = 0; i < size; i++)
		pNewArr[i] = (i < (size / 2) ? ptr[i] : 0);

	delete[] ptr;
	return pNewArr;
}

//*******************************************************************************************************

int *shift(int *ptr, int &size)
{
	const int FIRST_VAL = 100;
	size++;
	int *pNewArr = new int[size];
	pNewArr[0] = FIRST_VAL;

	for (int i = 1; i < size; i++)
		pNewArr[i] = ptr[i - 1];

	delete[] ptr;
	return pNewArr;
}

//*******************************************************************************************************

void swap(int &first, int &second)
{
	int temp = first;
	first = second;
	second = temp;
}

//*******************************************************************************************************

// Output:
/*
 * Please enter a size: 3
Enter all values now
Value 1: 1
Value 2: 2
Value 3: 3

All values are:
1    2    3

After reversing, all values are:
3    2    1

After expanding, all values are:
3    2    1    0    0
0

After shifting, all values are:
100  3    2    1    0
0    0

Process finished with exit code 0
 */