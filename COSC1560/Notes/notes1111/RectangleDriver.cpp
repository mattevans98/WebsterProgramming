#include "Rectangle.h"
#include <iostream>
using namespace std;

int main()
{
    Rectangle floor;
    floor.setWidth(10);
    floor.setLength(18);

    cout << floor.getWidth() << endl;
    cout << floor.getLength() << endl;
    cout << floor.getArea() << endl;

    return 0;
}