//*******************************************************************************************************
//
//		File:					HW0923.cpp
//
//		Student:				Matt Evans
//
//		Assignment:				Program #HW0923
//
//		Course Name:			Programming II
//
//		Course Number:			COSC 1560-01
//
//		Due:					9/26/22
//
//
//		This program answers problem #8 on the c-string worksheet
//
//		Other files required:
//			1.	none
//
//*******************************************************************************************************

#include <iostream>
#include <cstring>
using namespace std;

//*******************************************************************************************************

void get_extension(char *, char *);

//*******************************************************************************************************

int main()
{
	char *fileName = new char[81];
	char *extension = new char[81];
	strcpy(fileName, "names.txt");

	get_extension(fileName, extension);

	cout << "extension: " << extension << endl;

	delete[] extension;
	delete[] fileName;
	return 0;
}

//*******************************************************************************************************

void get_extension(char *fileName, char *extension)
{
	extension = strstr(fileName, ".");
}