//*******************************************************************************************************
//
//		File:					BacteriaData.cpp
//
//		Student:				Matt Evans
//
//		Assignment:				Program #A1
//
//		Course Name:			Programming II
//
//		Course Number:			COSC 1560-01
//
//		Due:					9/2/2022
//
//
//		This program creates a 2D array, then calculates and displays its data
//
//		Other files required:
//			1.	none
//
//*******************************************************************************************************

#include
<iostream>
#include
<iomanip>

using namespace std;

const int COL_SIZE = 4;

void getOneNum(int &);

void getAllData(int[][COL_SIZE], int);

void displayAllData(const int[][COL_SIZE], int);

double getAllAverage(const int[][COL_SIZE], int);

void displayRowSum(const int[][COL_SIZE], int);

void displayColSum(const int[][COL_SIZE], int);

int getDiagonalLowest(const int[][COL_SIZE]);

//*******************************************************************************************************

int main()
{
const int ROW_SIZE = 4;
int data[ROW_SIZE][COL_SIZE];

getAllData(data, ROW_SIZE);
displayAllData(data, ROW_SIZE);
cout << "The average for all values: " << getAllAverage(data, ROW_SIZE) << endl << endl;
displayRowSum(data, ROW_SIZE);

return 0;
}

//*******************************************************************************************************

void getOneNum(int &data)
{
const int MIN = 0, MAX = 500;
cin >> data;

while (data < MIN || data > MAX)
{
cout << "Values cannot be less than " << MIN << " or greater than " << MAX << endl;
cout << "Re-enter: ";
cin >> data;
}
}

//*******************************************************************************************************

void getAllData(int data[][COL_SIZE], int rowSize)
{
for (int r = 0; r < rowSize; r++)
{
cout << "Enter values for row " << r + 1 << ": " << endl;

for (int c = 0; c < COL_SIZE; c++)
{
cout << "Value " << c + 1 << ": ";
getOneNum(data[r][c]);
}
}

cout << endl;
}

//*******************************************************************************************************

void displayAllData(const int data[][COL_SIZE], int rowSize)
{
cout << "You have entered: " << endl;
for (int r = 0; r < rowSize; r++)
{
for (int c = 0; c < COL_SIZE; c++)
cout << data[r][c] << setw(5);
cout << endl << setw(0);
}

cout << endl;
}

//*******************************************************************************************************

double getAllAverage(const int data[][COL_SIZE], int rowSize)
{
double sum = 0;

for (int r = 0; r < rowSize; r++)
for (int c = 0; c < COL_SIZE; c++)
sum += data[r][c];

return static_cast<double>(sum / (rowSize * COL_SIZE));
}

//*******************************************************************************************************

void displayRowSum(const int data[][COL_SIZE], int rowSize)
{
int sum;

cout << "Sum of each row: " << endl;

for (int r = 0; r < rowSize; r++)
{
sum = 0;

for (int c = 0; c < COL_SIZE; c++)
{
sum += data[r][c];
}

cout << "Sum for row " << r + 1 << ": " << sum << endl;
}
}