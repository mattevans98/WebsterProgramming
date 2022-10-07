#include <iostream>
using namespace std;

//*******************************************************************************************************

/*
Primitive Data Types
	- int/char/double etc.

Abstract Data Types (ADT)
 	- struct
 		- Should only contain member variables
*/

//*******************************************************************************************************

struct Rectangle
{
	int width;
	int length;
};

//*******************************************************************************************************

void getInput(Rectangle &);

//*******************************************************************************************************

int main()
{
	Rectangle floor;
	floor.width = 5;
	floor.length = 10;

	int area = floor.length * floor.width;

	Rectangle carpet = {10, 30};

	Rectangle myRecs[5] = {
			{0, 0},
			{0, 1},
			{0, 2},
			{0, 3},
			{0, 4}
	};

	myRecs[0].width = 10;
	myRecs[0].length = 100;

	getInput(carpet);

	return 0;
}

//*******************************************************************************************************

void getInput(Rectangle &recs)
{
	cout << "Enter width: ";
	cin >> recs.width;
	cout << "Enter length: ";
	cin >> recs.length;
}

//*******************************************************************************************************