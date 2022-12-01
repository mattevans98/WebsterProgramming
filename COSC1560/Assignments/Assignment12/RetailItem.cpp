//*******************************************************************************************************
//
//		File:					RetailItem.cpp
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
//		This program defines the RetailItem ADT member functions
//
//		Other files required:
//			1. RetailItem.h
//          2. Store.h
//          3. Store.cpp
//          4. StoreDriver.cpp
//
//*******************************************************************************************************

#include "RetailItem.h"

RetailItem::RetailItem()
{
    description = "*none*";
    quantity = 0;
    price = 0.0;
}

//*******************************************************************************************************

string RetailItem::getDescription() const
{
    return description;
}

//*******************************************************************************************************

int RetailItem::getQuantity() const
{
    return quantity;
}

//*******************************************************************************************************

double RetailItem::getPrice() const
{
    return price;
}

//*******************************************************************************************************

void RetailItem::setDescription(string description)
{
    this->description = description;
}

//*******************************************************************************************************

void RetailItem::setQuantity(int quantity)
{
    this->quantity = quantity;
}

//*******************************************************************************************************

void RetailItem::setPrice(double price)
{
    this->price = price;
}

//*******************************************************************************************************