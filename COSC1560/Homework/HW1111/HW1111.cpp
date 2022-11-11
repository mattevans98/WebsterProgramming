#include <iostream>
using namespace std;

//*******************************************************************************************************

long byteNum(const int RECORD_SIZE)
{
    int recordNum;

    do
    {
        cout << "Enter the record number: ";
        cin >> recordNum;
    } while (recordNum < 0 || recordNum > RECORD_SIZE);

    return recordNum * sizeof(recordNum);
}