#ifndef MYSTRING_H
#define MYSTRING_H

#include <cstring>

class MyString
{
private:
    char *str;
    int length;
public:
    MyString(int = 5);
    ~MyString();
};


#endif
