//*******************************************************************************************************
//
//		File:					PhoneBook.cpp
//
//		Student:				Matt Evans
//
//		Assignment:				Program #A4
//
//		Course Name:			Programming II
//
//		Course Number:			COSC 1560-01
//
//		Due:					9/26/22
//
//
//		This program stores 11 c-strings of phone numbers/names and searches through and displays them
//
//		Other files required:
//			1.	none
//
//*******************************************************************************************************

#include <iostream>
#include <cstring>
using namespace std;

//*******************************************************************************************************

const int SIZE = 11;
const int STRING_SIZE = 81;

//*******************************************************************************************************

void handler();
void fill(char **);
void search(char **);
char getShortest(char [][STRING_SIZE]);
void enterBirthday(char [][STRING_SIZE]);
void display(char [][STRING_SIZE]);

//*******************************************************************************************************

int main()
{
	handler();

	return 0;
}

//*******************************************************************************************************

void handler()
{
	//char phoneBook[SIZE][STRING_SIZE];
	char **phoneBook = new char *[SIZE];
	for (int i = 0; i < SIZE; ++i)
		phoneBook[i] = new char[STRING_SIZE];

	fill(phoneBook);
	search(phoneBook);
}

//*******************************************************************************************************

void fill(char **phoneBook)
{
	/*char ** pNamesNums = new char*[SIZE] {
			"Alejandra Cruz, 555-1223",
			"Joe looney, 555-0097",
			"Geri Palmer, 555-8787",
			"Li Chen, 555-1212",
			"Holly Gaddis, 555-8878",
			"Sam Wiggins, 555-0998",
			"Bob Kain, 555-8712",
			"Tim Haynes, 555-7676",
			"Warren Gaddis, 555-9037",
			"Jean James, 555-4939",
			"Rom Palmer, 555-2783"
	};*/

	char namesNums[][STRING_SIZE] = {
			"Alejandra Cruz, 555-1223",
			"Joe looney, 555-0097",
			"Geri Palmer, 555-8787",
			"Li Chen, 555-1212",
			"Holly Gaddis, 555-8878",
			"Sam Wiggins, 555-0998",
			"Bob Kain, 555-8712",
			"Tim Haynes, 555-7676",
			"Warren Gaddis, 555-9037",
			"Jean James, 555-4939",
			"Rom Palmer, 555-2783"
	};

	for (int i = 0; i < SIZE; ++i)
		strcpy(phoneBook[i], namesNums[i]);

}

//*******************************************************************************************************

void search(char **phoneBook)
{
	char *pInput = new char[STRING_SIZE];
	char **pFound = new char *[SIZE];
	char *ptr = nullptr;
	int matchNum = 0;

	cout << "Enter a name or partial name to search for: ";
	cin.getline(pInput, STRING_SIZE);
	cout << endl;

	cout << "Here are the results of the search: " << endl;

	for (int i = 0; i < SIZE; ++i)
	{
		ptr = strstr(phoneBook[i], pInput);

		if (ptr != nullptr)
		{
			pFound[i] = phoneBook[i];
			cout << pFound[i] << endl;
			matchNum++;
		}
	}

	if (matchNum == 0)
		cout << "No entries were found for " << pInput << endl;
}

//*******************************************************************************************************
