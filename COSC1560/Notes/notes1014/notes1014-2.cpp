#include <iostream>
using namespace std;

//*******************************************************************************************************

struct MyString
{
    char *str;
    int length;

    MyString()
    {
        str = new char[1];
        str[0] = '\0';
        length = 0;
    }

    ~MyString()
    {
        delete[] str;
    }
};

//*******************************************************************************************************

int main()
{
    MyString obj;
    obj.length = 5;
    obj.str = new char[obj.length];

    return 0;
}

//*******************************************************************************************************
