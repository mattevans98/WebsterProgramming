//*******************************************************************************************************
//
//		File:					HW0921.cpp
//
//		Student:				Matt Evans
//
//		Assignment:				Program #HW0921
//
//		Course Name:			Programming II
//
//		Course Number:			COSC 1560-01
//
//		Due:					9/23/2022
//
//
//		This program answers the prompts on the assigned worksheet fro problems #2, #4, and #5
//
//		Other files required:
//			1.	none
//
//*******************************************************************************************************

#include <iostream>
#include <cstring>
using namespace std;

//*******************************************************************************************************

// Problem #5 function prototype
void change(char *);

//*******************************************************************************************************

int main()
{
	const int SIZE = 81;
	char *str = new char[SIZE];

	// Problem #2
	strcpy(str, "Hello");
	cout << str << endl;

	// Problem #4
	strcpy(str, "Mississippi");
	cout << str << endl;
	// Problem #5 function call
	change(str);
	cout << str << endl;

	return 0;
}

//*******************************************************************************************************

// Problem #5 function definition
void change(char *str)
{
	for (int i = 0; i < strlen(str); i++)
		if (str[i] == 's')
			str[i] = 'x';
}

//*******************************************************************************************************
