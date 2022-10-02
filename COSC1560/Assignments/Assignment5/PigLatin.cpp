//*******************************************************************************************************
//
//		File:					PigLatin.cpp
//
//		Student:				Matt Evans
//
//		Assignment:				Program #A5
//
//		Course Name:			Programming II
//
//		Course Number:			COSC 1560-01
//
//		Due:					10/3/22
//
//
//		This program manipulates a string by translating it to Pig Latin
//
//		Other files required:
//			1.	none
//
//*******************************************************************************************************

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

//*******************************************************************************************************

void handler();
bool check_valid(const string &);
void convert_to_upper(string &);
void reverse(string &);
void find_remove_gh(string &);
void append_ay(string &);
void append_length(string &);

//*******************************************************************************************************

int main()
{
	handler();

	return 0;
}

//*******************************************************************************************************

void handler()
{
	string input;

	cout << "Please enter a sentence in English: " << endl;
	getline(cin, input);
	while (!check_valid(input))
	{
		cout << "A sentence cannot contain punctuation" << endl;
		cout << "Please enter a sentence in English: " << endl;
		getline(cin, input);
	}
	convert_to_upper(input);

	cout << "Pig Latin is: " << endl << input;
}

//*******************************************************************************************************

bool check_valid(const string &str)
{
	bool isValid = true;

	for (int i = 0; isValid && str[i] != '\0'; ++i)
		if (ispunct(str[i]))
			isValid = false;

	return isValid;
}

//*******************************************************************************************************

void convert_to_upper(string &str)
{
	for (int i = 0; str[i] != '\0'; ++i)
		str[i] = toupper(str[i]);
}

//*******************************************************************************************************