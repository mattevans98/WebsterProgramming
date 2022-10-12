#include <iostream>
using namespace std;

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
    int id;
    Date birthday;
    Address homeAddress;
};

void getInfo(Employee &);

int main()
{
    Employee emp;

    return 0;
}

void getInfo(Employee &emp)
{

}