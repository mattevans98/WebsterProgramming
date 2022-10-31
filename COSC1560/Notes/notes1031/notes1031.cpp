#include <iostream>
#include <fstream>
using namespace std;

//*******************************************************************************************************

int main()
{
    fstream file;
    char letter;
    // single | is a bitwise OR, which adds the two bits together
    file.open("input.txt", ios::in | ios::app);
    if (!file.fail())
    {
        while (file.get(letter))
            cout << letter << endl;
        file.clear();
        file.put('x');

        file.close();
    }
    else
    {
        cout << "File failed to open" << endl;
    }
    return 0;
}
