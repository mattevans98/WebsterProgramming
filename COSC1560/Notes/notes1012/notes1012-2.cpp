#include <iostream>
using namespace std;

//*******************************************************************************************************

struct Date
{
    int month;
    int day;
};

//*******************************************************************************************************

int main()
{
    Date *p = new Date;
    Date obj;
    obj.month = 10;
    obj.day = 12;
    p->month = 10;
    p->day = 12;

    delete p;
    p = nullptr;

    p = new Date[5];
    for (int i = 0; i < 5; i++)
    {
        p[i].month = 10;
        p[i].day = 12;

        (*(p + i)).month = 10;
        (*(p + i)).day = 12;

        (p + i)->month = 10;
        (p + i)->day = 12;
    }

    return 0;
}