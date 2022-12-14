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

const int STRING_SIZE = 81;

//*******************************************************************************************************

void handler();
void fill(char **, int);
void search(char **, int);
char *getShortest(char **, int);
void enterBirthday(char **);
void display(char **, int);

//*******************************************************************************************************

int main()
{
	handler();

	return 0;
}

//*******************************************************************************************************

void handler()
{
	const int SIZE = 11;
	char **phoneBook = new char *[SIZE];
	for (int i = 0; i < SIZE; ++i)
		phoneBook[i] = new char[STRING_SIZE];

	fill(phoneBook, SIZE);
	display(phoneBook, SIZE);
	search(phoneBook, SIZE);
	cout << "The shortest entry is " << getShortest(phoneBook, SIZE) << endl << endl;
	enterBirthday(phoneBook);
	display(phoneBook, SIZE);

	for (int i = 0; i < SIZE; ++i)
		delete[] phoneBook[i];
	delete[] phoneBook;
}

//*******************************************************************************************************

void fill(char **phoneBook, const int SIZE)
{
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

void search(char **phoneBook, const int SIZE)
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

	delete[] pInput;
	delete[] ptr;
	for (int i = 0; i < SIZE; ++i)
		delete[] pFound[i];
	delete[] pFound;
}

//*******************************************************************************************************

char *getShortest(char **phoneBooks, const int SIZE)
{
	char *pShortest = phoneBooks[0];

	for (int i = 1; i < SIZE; ++i)
	{
		if (strlen(phoneBooks[i]) < strlen(pShortest))
			pShortest = phoneBooks[i];
	}

	return pShortest;
}

//*******************************************************************************************************

void enterBirthday(char **phoneBook)
{
	char *birthday = new char[STRING_SIZE];
	cout << "Please enter a birthday in the format of MM/DD: ";
	cin >> birthday;

	if (strcmp(birthday, "09/23") == 0)
		cout << "Happy birthday!" << endl;

	strcat(phoneBook[0], birthday);

	delete[] birthday;
}

//*******************************************************************************************************

void display(char **phoneBook, const int SIZE)
{
	cout << "********************************************************************************" << endl;
	cout << "All entries" << endl;
	for (int i = 0; i < SIZE; ++i)
		cout << phoneBook[i] << endl;
	cout << endl;
}

//*******************************************************************************************************

// Output:
/*
********************************************************************************
All entries
Alejandra Cruz, 555-1223
Joe looney, 555-0097
Geri Palmer, 555-8787
Li Chen, 555-1212
Holly Gaddis, 555-8878
Sam Wiggins, 555-0998
Bob Kain, 555-8712
Tim Haynes, 555-7676
Warren Gaddis, 555-9037
Jean James, 555-4939
Rom Palmer, 555-2783

Enter a name or partial name to search for: Palmer

Here are the results of the search:
Geri Palmer, 555-8787
Rom Palmer, 555-2783
The shortest entry is Li Chen, 555-1212

Please enter a birthday in the format of MM/DD: 09/23
Happy birthday!
********************************************************************************
All entries
Alejandra Cruz, 555-122309/23
Joe looney, 555-0097
Geri Palmer, 555-8787
Li Chen, 555-1212
Holly Gaddis, 555-8878
Sam Wiggins, 555-0998
Bob Kain, 555-8712
Tim Haynes, 555-7676
Warren Gaddis, 555-9037
Jean James, 555-4939
Rom Palmer, 555-2783


Process finished with exit code 0
*/