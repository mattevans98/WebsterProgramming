//*******************************************************************************************************
//
//		File:					RetailItem.h
//
//		Student:				Matt Evans
//
//		Assignment:				Program #A12
//
//		Course Name:			Programming II
//
//		Course Number:			COSC 1560-01
//
//		Due:					12/7/22
//
//
//		This program declares the RetailItem ADT
//
//		Other files required:
//			1. RetailItem.cpp
//          2. Store.h
//          3. Store.cpp
//          4. StoreDriver.cpp
//
//*******************************************************************************************************

#ifndef RETAILITEM_H
#define RETAILITEM_H

#include <string>
using namespace std;

//*******************************************************************************************************

class RetailItem
{
private:
    string description;
    int quantity;
    double price;
public:
    RetailItem(string = "*none", int = 0, double = 0.0);
    string getDescription() const;
    int getQuantity() const;
    double getPrice() const;
    void setDescription(string);
    void setQuantity(int);
    void setPrice(double);
};

//*******************************************************************************************************

#endif
