//*******************************************************************************************************
//
//		File:					getAverage.cpp
//
//		Student:				Matt Evans
//
//		Assignment:				Program #HW0824
//
//		Course Name:			Programming II
//
//		Course Number:			COSC 1560-01
//
//		Due:					8/26/22
//
//
//		This program calculates the average of a 2D array's values
//
//		Other files required:
//			1.	none
//
//*******************************************************************************************************

#include <iostream>

using namespace std;

const int COL = 3;

double getAverage(const int [][COL], int);

//*******************************************************************************************************

int main()
{
	const int ROW = 3;
	int settings[ROW][COL] = {
			{1, 4, 2},
			{6, 4, 8},
			{9, 0, 0}};

	cout << "Average: " << getAverage(settings, ROW);

	return 0;
}

//*******************************************************************************************************

//*******************************************************************************************************

double getAverage(const int data[][COL], int row)
{
	double total = 0;

	for (int r = 0; r < row; r++)
		for (int c = 0; c < COL; c++)
			total += data[r][c];

	return total / (row * COL);
}

//*******************************************************************************************************
