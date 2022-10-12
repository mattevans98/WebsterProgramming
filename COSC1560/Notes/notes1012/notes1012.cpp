#include <iostream>
using namespace std;

//*******************************************************************************************************

struct Date
{
    int month;
    int day;
    int year;
};

struct Address
{
    string street;
    int zip;
};

struct Employee
{
    string name;
    Date birthday;
    Address homeAddress;
};

//*******************************************************************************************************

void getInfo(Employee &);
void display(const Employee [], int);

//*******************************************************************************************************

int main()
{
    Employee emp;
    getInfo(emp);
    Employee emps[5];

    for (int i = 0; i < 5; i++)
        getInfo(emps[i]);

    display(emps, 5);

    return 0;
}

//*******************************************************************************************************

void getInfo(Employee &emp)
{
    getline(cin, emp.name);
    getline(cin, emp.homeAddress.street);
    cin >> emp.homeAddress.zip;
    cin >> emp.birthday.month;
    cin >> emp.birthday.day;
    cin >> emp.birthday.year;
}

//*******************************************************************************************************

void display(const Employee emps[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << emps[i].name << endl;
        cout << emps[i].homeAddress.street << endl;
        cout << emps[i].homeAddress.zip << endl;
        cout << emps[i].birthday.month << endl;
        cout << emps[i].birthday.day << endl;
        cout << emps[i].birthday.year << endl;
    }
}

//*******************************************************************************************************