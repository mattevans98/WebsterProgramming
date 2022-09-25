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
void fill(char [][STRING_SIZE]);
void search(char *[]);
char *getShortest(char *[]);
void enterBirthday(char *[]);
void display(char *[]);

//*******************************************************************************************************

int main()
{
	handler();

	return 0;
}

//*******************************************************************************************************

void handler()
{

	char phoneBook[SIZE][STRING_SIZE];
	fill(phoneBook);
}

//*******************************************************************************************************

void fill(char phoneBook[][STRING_SIZE])
{
	char namesNums[SIZE][STRING_SIZE] = {
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
	{
		strcpy(phoneBook[i], namesNums[i]);
		cout << "phoneBook[" << i << "]: " << phoneBook[i] << endl;
	}

}

//*******************************************************************************************************