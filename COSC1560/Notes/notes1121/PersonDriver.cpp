#include "Person.h"

int main()
{
    Person myself;
    Person myFriend("Jane Doe", 15);
    //Person myFamily[5];

    myself.setName("John Doe");
    cout << myself.getName() << endl;

    return 0;
}