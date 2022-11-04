#include <iostream>
#include <fstream>
using namespace std;

//*******************************************************************************************************

const int SIZE = 81;

//*******************************************************************************************************

struct Info
{
    char name[SIZE];
    int id;
    char address[SIZE];
};

//*******************************************************************************************************

long getSize(fstream &);
void readFile();
void randomRead();

//*******************************************************************************************************

int main()
{
    fstream file("record.dat", ios::out | ios::binary);
    Info employee = {"John Doe", 1001, "123 Main St."};
    file.write(reinterpret_cast<char *>(&employee), sizeof(employee));
    cout << getSize(file) << endl;
    Info emps[3] = {{"Jane Doe",   1002, "456 Main St."},
                    {"John Smith", 1003, "789 Main St."},
                    {"Jane Smith", 1004, "101 Main St."}};
    file.write(reinterpret_cast<char *>(emps), sizeof(emps));
    cout << getSize(file) << endl;
    file.close();

    readFile();
    randomRead();

    return 0;
}

//*******************************************************************************************************

long getSize(fstream &file)
{
    long size;
    file.clear();
    file.seekp(0L, ios::end);
    size = file.tellp();

    return size;
}

//*******************************************************************************************************

void readFile()
{
    ifstream fin("record.dat", ios::binary);
    Info emp;

    if (!fin.fail())
    {
        while (fin.read(reinterpret_cast<char *>(&emp), sizeof(emp)))
            cout << emp.name << " " << emp.id << " " << emp.address << endl;
        fin.close();
    }
    else
    {
        cout << "Error opening file" << endl;
    }
}

//*******************************************************************************************************

void randomRead()
{
    int recordNum;
    long location;
    Info emp;
    ifstream fin("record.dat", ios::binary);

    if (!fin.fail())
    {
        cout << "Which record: ";
        cin >> recordNum;
        location = (recordNum - 1) * sizeof(Info);
        fin.seekg(location, ios::beg);
        fin.read(reinterpret_cast<char *>(&emp), sizeof(emp));
        cout << emp.name << " " << emp.id << " " << emp.address << endl;
    }
    else
    {
        cout << "Error opening file" << endl;
    }

}