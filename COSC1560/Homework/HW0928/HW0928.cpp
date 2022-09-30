//*******************************************************************************************************
//
//		File:					HW0928.cpp
//
//		Student:				Matt Evans
//
//		Assignment:				Program #HW0926\8
//
//		Course Name:			Programming II
//
//		Course Number:			COSC 1560-01
//
//		Due:					9/30/22
//
//
//		This program find the substring "gh" and erases it and the rest of the string
//
//		Other files required:
//			1.	none
//
//*******************************************************************************************************

#include <iostream>
#include <string>
using namespace std;

//*******************************************************************************************************

void find_remove_gh(string &);

//*******************************************************************************************************

int main()
{
	string str = "night";

	cout << str << endl;
	find_remove_gh(str);
	cout << str << endl;

	return 0;
}

//*******************************************************************************************************

void find_remove_gh(string &str)
{
	size_t foundIndex = str.find("gh");
	if (foundIndex != string::npos)
		str.erase(foundIndex);
}

//*******************************************************************************************************

// Output:
/*
night
ni

Process finished with exit code 0
*/