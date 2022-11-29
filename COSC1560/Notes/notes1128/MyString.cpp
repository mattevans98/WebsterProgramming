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

void MyString::append(const char *str)
{
    char *temp = this->str;
    length += strlen(str);
    this->str = new char[length + 1];
    strcpy(this->str, temp);
    strcat(this->str, str);
    delete[] temp;
}