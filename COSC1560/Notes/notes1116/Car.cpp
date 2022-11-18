#include "Car.h"

void Car::display() const
{
    cout << make << " " << price << " " << mileage << endl;
}

void Car::setMake(string make)
{
    this->make = make;
}

void Car::setValues(int mileage, double price, string make)
{
    this->make = make;
    this->price = price;
    this->mileage = mileage;
}

Car::Car()
{
    make = "***";
    price = 0.0;
    mileage = 0;
}