#include <iostream>
#include <fstream>
using namespace std;

//*******************************************************************************************************
int main()
{
    fstream file;
    // single | is a bitwise OR, which adds the two bits together
    file.open("input.txt", ios::in | ios::app);
    return 0;
}
