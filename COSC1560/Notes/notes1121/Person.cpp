// Implements the Person ADT
#include "Person.h"

Person::Person()
{
    age = 0;
    name = new char[51];
    strcpy(name, "***");

    cout << name << " in constructor" << endl;
}

Person::~Person()
{
    cout << name << " in destructor" << endl;
    delete[] name;
}