#include "MyString.h"

MyString::MyString(int length)
{
    this->len = length;
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
    len = strlen(str);
    this->str = new char[len + 1];
    strcpy(this->str, str);
}

void MyString::append(const char *str)
{
    char *temp = this->str;
    len += strlen(str);
    this->str = new char[len + 1];
    strcpy(this->str, temp);
    strcat(this->str, str);
    delete[] temp;
}

const char *MyString::c_str() const
{
    return str;
}

void MyString::print() const
{
    cout << str;
}

bool MyString::equal(const char *str) const
{
    return strcmp(this->str, str) == 0;
}