//*******************************************************************************************************
//
//		File:					diagonal.cpp
//
//		Student:				Matt Evans
//
//		Assignment:				Program #HW0826
//
//		Course Name:			Programming II
//
//		Course Number:			COSC 1560-01
//
//		Due:					8-26-22
//
//
//		This program loops through a 2D array diagonally
//
//		Other files required:
//			1.	none
//
//*******************************************************************************************************

#include <iostream>

using namespace std;

const int COL = 3;

int main()
{
	const int ROW = 3;
	int sum = 0;
	int settings[ROW][COL] = {
			{1, 2, 3},
			{4, 5, 6},
			{7, 8, 9}};

	for (int i = 1; i <= ROW; i++) {
		sum += settings[i - 1][ROW - i];
	}

	cout << sum << endl;
	return 0;
}
