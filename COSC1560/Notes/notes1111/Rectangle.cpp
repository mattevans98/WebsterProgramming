#include "Rectangle.h"

//*******************************************************************************************************

void Rectangle::setWidth(int width)
{
    this->width = width;
}

void Rectangle::setLength(int length)
{
    this->length = length;
}

int Rectangle::getWidth() const
{
    return width;
}

int Rectangle::getLength() const
{
    return length;
}

int Rectangle::getArea() const
{
    return width * length;
}