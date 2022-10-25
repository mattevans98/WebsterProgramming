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
#include <iomanip>
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

void handler()
{
    Team aTeam;
    getScores(aTeam);
    displayTeamInfo(aTeam);
    freeMemory(aTeam);
}

//*******************************************************************************************************

void getScores(Team &aTeam)
{
    cout << "Enter the team name: ";
    cin.getline(aTeam.teamName, STRING_SIZE);
    cout << "Enter the number of team members: ";
    cin >> aTeam.numOfTeamMembers;
    cin.ignore();
    aTeam.ptrTeamMember = new Player[aTeam.numOfTeamMembers];
    for (int i = 0; i < aTeam.numOfTeamMembers; i++)
    {
        cout << "Enter the information for team member " << i + 1 << ": " << endl;
        cout << "Name: ";
        cin.getline(aTeam.ptrTeamMember[i].name, STRING_SIZE);
        cout << "Number: ";
        cin >> aTeam.ptrTeamMember[i].playerNumber;
        cout << "Points: ";
        cin >> aTeam.ptrTeamMember[i].points;
        cin.ignore();
    }
}

//*******************************************************************************************************

double calculateAverage(const Team &team)
{
    double total = 0;

    for (int i = 0; i < team.numOfTeamMembers; i++)
        total += team.ptrTeamMember[i].points;

    return total / team.numOfTeamMembers;
}

//*******************************************************************************************************

void displayTeamInfo(const Team &team)
{
    cout << string(50, '*') << endl;
    cout << team.teamName << endl;

    for (int i = 0; i < team.numOfTeamMembers; i++)
    {
        cout << left << setw(25) << team.ptrTeamMember[i].name;
        cout << setw(15) << team.ptrTeamMember[i].playerNumber;
        cout << setw(15) << team.ptrTeamMember[i].points << endl;
    }

    cout << right << string(50, '*') << endl;
    cout << calculateAverage(team) << endl;
}

//*******************************************************************************************************

void freeMemory(Team &team)
{
    delete[] team.ptrTeamMember;
    team.ptrTeamMember = nullptr;
}