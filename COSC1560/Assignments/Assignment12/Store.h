//*******************************************************************************************************
//
//		File:					Store.h
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
//		This program declares the Store ADT
//
//		Other files required:
//			1. RetailItem.cpp
//          2. RetailItem.h
//          3. Store.cpp
//          4. StoreDriver.cpp
//
//*******************************************************************************************************

#ifndef STORE_H
#define STORE_H

#include "RetailItem.h"
#include <iostream>
#include <iomanip>

class Store
{
private:
    RetailItem *items;
    int numItems;
    string storeName;
public:
    Store(int = 5, string = "Webster Grocery");
    ~Store();
    void displayAllItems() const;
    int getNumItems() const;
    string getStoreName() const;
    void setAllItems();
};


#endif
