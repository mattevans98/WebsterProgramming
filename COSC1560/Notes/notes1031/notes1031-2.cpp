#include <iostream>
#include <fstream>
using namespace std;

//*******************************************************************************************************

int main()
{
    fstream file;
    int a = 15;

    file.write(reinterpret_cast<char *>(&a), sizeof(a));
    file.close();

    ofstream fout;
    fout.open("output.dat", ios::binary); // ios::binary is required for binary files
    double b = 3.14;

    fout.write(reinterpret_cast<char *>(&b), sizeof(b));
    fout.close();

    return 0;
}