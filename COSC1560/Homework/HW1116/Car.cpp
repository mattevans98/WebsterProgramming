//*******************************************************************************************************
//
//		File:					Car.cpp
//
//		Student:				Matt Evans
//
//		Assignment:				Program #HW1116
//
//		Course Name:			Programming II
//
//		Course Number:			COSC 1560-01
//
//		Due:					11/18/22
//
//
//		This program completes the program methods discussed in class
//
//		Other files required:
//			1. CarDriver.cpp
//          2. Car.h
//
//*******************************************************************************************************

#include "Car.h"

void Car::display() const
{
    cout << make << " " << price << " " << mileage << endl;
}

void Car::setMake(string make)
{
    this->make = make;
}

// Homework problem #1
void Car::setPrice(double price)
{
    this->price = price;
}

// Homework problem #2
void Car::setMileage(int mileage)
{
    this->mileage = mileage;
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