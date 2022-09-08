//*******************************************************************************************************
//
//		File:					HW0907.cpp
//
//		Student:				Matt Evans
//
//		Assignment:				Program #HW0907
//
//		Course Name:			Programming II
//
//		Course Number:			COSC 1560-01
//
//		Due:					9/9/22
//
//
//		This program calls a function that swaps two pointers' values
//
//		Other files required:
//			1.	none
//
//*******************************************************************************************************

void swap(int *, int *);

int main()
{
	int a = 5, b = 10;

	swap(&a, &b);

	return 0;
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}