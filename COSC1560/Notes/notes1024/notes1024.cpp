#include <iostream>
using namespace std;

//*******************************************************************************************************

struct Town
{
    string name;
    double population;
};

struct County
{
    int numTowns;
    Town *ptr;
    double avgPopulation;
};

//*******************************************************************************************************

int main()
{
    Town t = {"Webster Groves", 10000};
    County c;
    County *ptr = new County[5];

    cin >> c.numTowns;
    c.ptr = new Town[c.numTowns];
    for (int i = 0; i < c.numTowns; i++)
        cin >> c.ptr[i].population;

    for (int i = 0; i < 5; i++)
    {
        cout << "County: " << i + 1;
        cin >> (ptr + i)->numTowns;
        ptr[i].ptr = new Town[ptr[i].numTowns];
        for (int j = 0; j < ptr[i].numTowns; j++)
        {
            cin.ignore();
            getline(cin, ptr[i].ptr[j].name);
            cin >> ptr[i].ptr[j].population;
        }
    }

    delete[] c.ptr;
    for (int i = 0; i < 5; i++)
        delete[] ptr[i].ptr;
    delete[] ptr;
    return 0;
}

//*******************************************************************************************************

