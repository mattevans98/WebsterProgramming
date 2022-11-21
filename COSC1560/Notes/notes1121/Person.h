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
public:
    Person();
    ~Person();

    void setName(const char *);
    const char *getName() const;
};

#endif
