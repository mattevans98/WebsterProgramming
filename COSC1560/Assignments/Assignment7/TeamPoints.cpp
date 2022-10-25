//*******************************************************************************************************
//
//		File:					TeamPoints.cpp
//
//		Student:				Matt Evans
//
//		Assignment:				Program #A7
//
//		Course Name:			Programming II
//
//		Course Number:			COSC 1560-01
//
//		Due:					10/26/22
//
//
//		This program keeps track of a team's information
//
//		Other files required:
//			1.	none
//
//*******************************************************************************************************

#include <iostream>
using namespace std;

//*******************************************************************************************************

const int STRING_SIZE = 81;

struct Player
{
    char name[STRING_SIZE];
    int playerNumber;
    int points;
};

struct Team
{
    char teamName[STRING_SIZE];
    int numOfTeamMembers;
    Player *ptrTeamMember;
    double avgPoints;
};

//*******************************************************************************************************

void handler();
void getScores(Team &);
double calculateAverage(const Team &);
void displayTeamInfo(const Team &);
void freeMemory(Team &);

//*******************************************************************************************************

int main()
{
    handler();
    return 0;
}

//*******************************************************************************************************