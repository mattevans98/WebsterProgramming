#ifndef CAR_H
#define CAR_H

#include <string>
#include <iostream>
using namespace std;

class Car
{
private:
    int mileage;
    double price;
    string make;
public:
    //Car();
    Car(int mileage = 0, double price = 0.0, string make = "***");

    void display() const;
    void setPrice(double); // HW
    void setMake(string);
    void setMileage(int); // HW

    void setValues(int, double, string);
};

#endif