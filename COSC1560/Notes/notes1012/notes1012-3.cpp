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
    Course myCourse;
    cin >> myCourse.size;
    myCourse.p = new Student[myCourse.size];

    for (int i = 0; i < myCourse.size; i++)
    {
        getline(cin, myCourse.p[i].name);
        cin >> myCourse.p[i].id;
        cin >> myCourse.p[i].grade;
    }

    delete[] myCourse.p;
    myCourse.p = nullptr;

    return 0;
}

//*******************************************************************************************************
