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
    County *ptr;

    cin >> c.numTowns;
    c.ptr = new Town[c.numTowns];
    for (int i = 0; i < c.numTowns; i++)
    {
        cin >> c.ptr[i].population;
    }

    delete[] c.ptr;
    return 0;
}

//*******************************************************************************************************

