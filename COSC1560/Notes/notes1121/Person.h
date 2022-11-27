// Defines Person ADT
#ifndef PERSON_H
#define PERSON_H

#include <cstring>
#include <iostream>
using namespace std;

class Person
{
private:
    char *name;
    int age;
    void _initName(const char *); // underscore indicates private member function

public:
    Person();
    Person(const char *, int);
    ~Person();

    void setName(const char *);
    const char *getName() const;
};

#endif
