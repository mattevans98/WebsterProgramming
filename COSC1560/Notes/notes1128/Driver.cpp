#include "MyString.h"

int main()
{
    MyString obj, obj1;
    const char *s = obj.c_str();
    cout << obj.c_str();
    obj.print();
    if (obj.equal("Hello"))
        cout << "Same" << endl;

    return 0;
}