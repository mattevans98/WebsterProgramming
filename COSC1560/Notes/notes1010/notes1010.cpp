#include <iostream>
using namespace std;

struct Employee
{
    string name;
    int hours;
    double hourly;
};

Employee getInfo();

int main()
{
    getInfo();

    return 0;
}

Employee getInfo()
{
    Employee emp;

    getline(cin, emp.name);
    cin >> emp.hours;
    cin >> emp.hourly;

    return emp;
}