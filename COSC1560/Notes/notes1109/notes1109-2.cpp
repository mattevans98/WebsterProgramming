#include <iostream>
#include <fstream>
using namespace std;

//*******************************************************************************************************

const int SIZE = 81;

struct Info
{
    char name[81];
    char address[81];
    double salary;
};

//*******************************************************************************************************

unsigned long fileSize(fstream &);

//*******************************************************************************************************

int main()
{
    int recNum;
    fstream dataFile;
    unsigned long numOfRecords = fileSize(dataFile) / sizeof(Info);

    cin >> recNum;

    while (recNum > numOfRecords)
    {
        cout << "Record number " << recNum << " does not exist." << endl;
        cin >> recNum;
    }

    return 0;
}

//*******************************************************************************************************

unsigned long fileSize(fstream &file)
{
    file.clear();
    file.seekg(0L, ios::end);

    return file.tellg();
}