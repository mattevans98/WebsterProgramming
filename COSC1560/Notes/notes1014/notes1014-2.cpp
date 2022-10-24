#include <iostream>
using namespace std;

//*******************************************************************************************************

struct MyString
{
    char *str;
    int length;

    MyString()                          // constructor
    {
        length = 5;
        str = new char[length];
        strcpy(str, "ABC");
    }

    ~MyString()                         // destructor
    {
        delete[] str;
    }
};

//*******************************************************************************************************

int main()
{
    MyString obj;
    cout << obj.str << endl;

    return 0;
}

//*******************************************************************************************************
