#include "Person.h"

int main()
{
    Person myself;
    Person myFriend("Jane Doe", 15);

    myself.setName("John Doe");
    cout << myself.getName() << endl;


    Person *p;
    p = new Person[3];
    for (int i = 0; i < 3; i++)
    {
        p[i].setName("A");
    }
    delete[] p;
    return 0;
}