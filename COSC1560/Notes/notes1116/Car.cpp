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

//Car::Car()
//{
//    make = "***";
//    price = 0.0;
//    mileage = 0;
//    cout << "Hello from the default constructor" << endl;
//}

// Overloaded constructor
Car::Car(int mileage, double price, string make)
{
    this->mileage = mileage;
    this->price = price;
    this->make = make;

    cout << "Hello from the second constructor." << endl;
}