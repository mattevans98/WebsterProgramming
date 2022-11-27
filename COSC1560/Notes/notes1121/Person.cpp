// Implements the Person ADT
#include "Person.h"

Person::Person()
{
    age = 0;
    _initName("***");

    cout << name << " in constructor" << endl;
}

Person::Person(const char *name, int age)
{
    this->age = age;
    cout << name << " in constructor" << endl;
    _initName(name);
}

Person::~Person()
{
    cout << name << " in destructor" << endl;
    delete[] name;
}

void Person::_initName(const char *name)
{
    int size = strlen(name);
    this->name = new char[size + 1];
    strcpy(this->name, name);
}

void Person::setName(const char *name)
{
    // remove current name
    delete[] this->name;
    _initName(name);
}

const char *Person::getName() const
{
    return name;
}