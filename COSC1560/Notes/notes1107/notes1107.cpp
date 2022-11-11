#include <iostream>
#include <fstream>
using namespace std;

//*******************************************************************************************************

int main()
{
    fstream d;
    d.open("record.dat", ios::binary | ios::in | ios::out);
    int a;
    long size = sizeof(a);

    d.seekg(2 * size, ios::cur);
    d.read(reinterpret_cast<char *>(&a), size);
    cout << a; // Outputs 2

    d.seekg(-size, ios::cur);
    d.read(reinterpret_cast<char *>(&a), size);
    cout << a; // Outputs 9
}