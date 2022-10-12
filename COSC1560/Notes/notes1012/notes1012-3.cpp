#include <iostream>
using namespace std;

//*******************************************************************************************************

struct Student
{
    string name;
    int id;
    double grade;
};

struct Course
{
    Student *p;
    int size;
};

//*******************************************************************************************************

int main()
{
    Course c;
    c.size = 10;
    c.p = new Student[c.size];

    for (int i = 0; i < c.size; i++)
    {
        c.p[i].name = "-";
        c.p[i].id = 0;
        c.p[i].grade = 0;
    }

    delete[] c.p;
    c.p = nullptr;

    return 0;
}

//*******************************************************************************************************
