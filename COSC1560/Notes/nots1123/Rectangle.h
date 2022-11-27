#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    int length,
            width;
public:
    Rectangle() : Rectangle(0, 0)
    {

    }

    Rectangle(int length, int width)
    {
        this->length = length;
        this->width = width;
    }
};

#endif
