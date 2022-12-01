#include <iostream>
#include <fstream>
using namespace std;

//*******************************************************************************************************

struct Info
{
    char name[81];
    char address[81];
    double salary;
};

//*******************************************************************************************************

long byteNum(int); // For assignment 14
void showInfo(const Info &);

//*******************************************************************************************************

int main()
{
    Info emp;
    int recordNum;
    long location;
    fstream file("record.dat", ios::in | ios::binary);
    if (!file.fail())
    {
        cin >> recordNum;
        location = byteNum(recordNum);
        file.clear(); // Clear the EOF flag if it is set
        file.seekg(location, ios::beg);
        file.read(reinterpret_cast<char *>(&emp), sizeof(emp));
        showInfo(emp);
        file.close();
    }
    else
    {
        cout << "Error opening file" << endl;
    }

    return 0;
}

//*******************************************************************************************************

long byteNum(int recNum)
{
    // if(recNum == outOfBounds)
    //    0L
    // else
    //    return actual byte
}