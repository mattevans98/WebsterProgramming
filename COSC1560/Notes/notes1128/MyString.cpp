#include "MyString.h"

MyString::MyString(int length)
{
    this->length = length;
    str = new char[length + 1];
    strcpy(str, "***");
}