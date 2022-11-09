#include <iostream>
#include <fstream>
using namespace std;

//*******************************************************************************************************

// File: 0 1 2 3 4 5 6 7 8 9 10 <EOF>

int main()
{
    fstream dataFile;
    dataFile.open("record.dat", ios::app | ios::binary); // ios::app appends file
    int a = 21;
    long size = sizeof(a);
    dataFile.seekp(6 * size, ios::beg);
    dataFile.write(reinterpret_cast<char *>(&a), size); // Replaces 6 with 21
}

