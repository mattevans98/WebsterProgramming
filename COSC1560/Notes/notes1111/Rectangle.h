class Rectangle
{
private:
    int width;
    int length;
public:
    void setWidth(int); // Mutator
    void setLength(int); // Mutator
    int getWidth() const; // Accessor
    int getLength() const; // Accessor
    int getArea() const; // Accessor
};