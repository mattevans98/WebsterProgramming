//*******************************************************************************************************
//
//		File:					NameReport.cpp
//
//		Student:				Matt Evans
//
//		Assignment:				Program #A8
//
//		Course Name:			Programming II
//
//		Course Number:			COSC 1560-01
//
//		Due:					11/3/22
//
//
//		This program keeps track of a team's information
//
//		Other files required:
//			1.	names.txt
//
//*******************************************************************************************************

#include <iostream>
#include <fstream>
using namespace std;

//*******************************************************************************************************

int getChoice();
void handleMenu(ifstream &);
void displayFirstFive(ifstream &);
void displayLastFive(ifstream &);
int count(ifstream &);
void copyToFile(ifstream &, ofstream &);
void search(ifstream &);

//*******************************************************************************************************

int main()
{
    ifstream fin;
    fin.open("names.txt");

    while (getChoice() != 6)
        handleMenu(fin);

    fin.close();

    return 0;
}

//*******************************************************************************************************

int getChoice()
{
    int choice;
    cout << string(40, '*');
    cout << "1. Display the first five names" << endl;
    cout << "2. Display the last five names" << endl;
    cout << "3. Count the number of names" << endl;
    cout << "4. Copy Names to names_copy.txt" << endl;
    cout << "5. Search for a name" << endl;
    cout << "6. Quit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    return choice;
}

//*******************************************************************************************************

void handleMenu(ifstream &fin)
{
    ofstream fout;

    switch (getChoice())
    {
        case 1:
            displayFirstFive(fin);
            break;
        case 2:
            displayLastFive(fin);
            break;
        case 3:
            cout << "There are " << count(fin) << " names" << endl;
            break;
        case 4:
            copyToFile(fin, fout);
            break;
        case 5:
            search(fin);
            break;
        case 6:
            cout << "Over!" << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
    }

    fout.close();
}

//*******************************************************************************************************

void displayFirstFive(ifstream &fin)
{
    fin.clear();
    fin.seekg(0L, ios::beg);
    string name;

    for (int i = 0; i < 5; i++)
    {
        fin >> name;
        cout << name << endl;
    }
}

//*******************************************************************************************************

void displayLastFive(ifstream &fin)
{
    fin.clear();
    fin.seekg(0L, ios::end);

    string name;

    for (int i = 0; i < 5; i++)
    {
        fin.seekg(-1L, ios::cur);
        fin >> name;
        cout << name << endl;
    }
}

//*******************************************************************************************************
