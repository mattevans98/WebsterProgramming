#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>
#include <cstring>
using namespace std;


class MyString
{
private:
    char *str;
    int len;
public:
    MyString(int = 5);
    ~MyString();
    void assign(const char *);
    void append(const char *);
    int length() const;
    const char *c_str() const;
    void print() const;
    bool equal(const char *) const;
};


#endif
