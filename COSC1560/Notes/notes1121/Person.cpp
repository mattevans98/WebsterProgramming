// Implements the Person ADT
#include "Person.h"

Person::Person()
{
    age = 0;
    name = new char[51];
    strcpy(name, "***");

    cout << name << " in constructor" << endl;
}

Person::Person(const char *name, int age)
{
    this->age = age;
    int size = strlen(name);
    this->name = new char[size + 1];
    strcpy(this->name, name);

    cout << name << " in constructor" << endl;
}

Person::~Person()
{
    cout << name << " in destructor" << endl;
    delete[] name;
}

void Person::setName(const char *name)
{
    // remove current name
    delete[] this->name;
    // dynamically allocate new name
    this->name = new char[strlen(name) + 1];
    // copy new name over
    strcpy(this->name, name);
}

const char *Person::getName() const
{
    return name;
}