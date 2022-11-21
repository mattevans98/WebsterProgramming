#include "Person.h"

int main()
{
    Person myself;
    //Person myFriend;
    //Person myFamily[5];

    myself.setName("John Doe");
    cout << myself.getName() << endl;

    return 0;
}