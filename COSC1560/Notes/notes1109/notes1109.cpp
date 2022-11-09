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

    a = 22;
    dataFile.seekp(-size, ios::cur);
    dataFile.write(reinterpret_cast<char *>(&a), size); // Replaces 6 with 22

    cout << dataFile.tellp() << endl; // Outputs: 28

    a = 23;
    dataFile.seekp(-4 * size, ios::end);
    dataFile.write(reinterpret_cast<char *>(&a), size); // Replaces 7 with 23

    a = 24;
    dataFile.seekp(0L, ios::beg);
    dataFile.write(reinterpret_cast<char *>(&a), size); // Replaces 0 with 24

    a = 25;
    dataFile.seekp(0L, ios::end);
    dataFile.write(reinterpret_cast<char *>(&a), size); // Appends 25 to end of file

    return 0;
}

