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

const int SIZE = 81;

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
    if (fin.fail())
    {
        cout << "Error opening file" << endl;
        return 1;
    }

    handleMenu(fin);

    fin.close();

    return 0;
}

//*******************************************************************************************************

int getChoice()
{
    int choice;
    cout << string(40, '*') << endl;
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
    int choice = 0;

    while (choice != 6)
    {
        choice = getChoice();
        switch (choice)
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
    }

    fout.close();
}

//*******************************************************************************************************

void displayFirstFive(ifstream &fin)
{
    fin.clear();
    fin.seekg(0L, ios::beg);
    char name[SIZE];

    for (int i = 0; i < 5; i++)
    {
        fin.getline(name, SIZE);
        cout << name << endl;
    }
}

//*******************************************************************************************************

void displayLastFive(ifstream &fin)
{

    char name[SIZE];
    int numOfLines = count(fin);

    fin.clear();
    fin.seekg(0L, ios::beg);

    for (int i = 0; i < numOfLines - 5; i++)
        fin.getline(name, SIZE);

    for (int i = numOfLines - 5; i <= numOfLines && fin.getline(name, SIZE); i++)
        cout << i + 1 << ".) " << name << endl;
}

//*******************************************************************************************************

int count(ifstream &fin)
{
    fin.clear();
    fin.seekg(0L, ios::beg);
    char name[SIZE];
    int count = 0;

    while (!fin.eof())
    {
        fin.getline(name, SIZE);
        count++;
    }

    return count;
}

//*******************************************************************************************************

void copyToFile(ifstream &fin, ofstream &fout)
{
    fin.clear();
    fin.seekg(0L, ios::beg);
    fout.open("names_copy.txt");

    string name;

    while (!fin.eof())
    {
        getline(fin, name);
        fout << name << endl;
    }


    fout.close();

    cout << "Done!" << endl;
}

//*******************************************************************************************************

void search(ifstream &fin)
{
    fin.clear();
    fin.seekg(0L, ios::beg);
    char name[SIZE];
    char searchName[SIZE];
    bool found = false;
    int lineNum = 1;

    cout << "Enter a name so I can search for it: ";
    cin.ignore();
    cin.getline(searchName, SIZE);

    while (!found && !fin.eof())
    {
        fin.getline(name, SIZE);
        if (strcmp(name, searchName) == 0)
            found = true;
        else
            lineNum++;
    }

    if (found)
        cout << "Found on line: " << lineNum << endl;
    else
        cout << "Not found" << endl;
}

//*******************************************************************************************************