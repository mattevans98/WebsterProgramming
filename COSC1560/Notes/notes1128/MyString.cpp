#include "MyString.h"

MyString::MyString(int length)
{
    this->length = length;
    str = new char[length + 1];
    strcpy(str, "***");
}

MyString::~MyString()
{
    delete[] str;
}

void MyString::assign(const char *str)
{
    delete[] this->str;
    length = strlen(str);
    this->str = new char[length + 1];
    strcpy(this->str, str);
}