//*******************************************************************************************************
//
//		File:					Store.cpp
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
//		This program defines the Store ADT member functions
//
//		Other files required:
//			1. RetailItem.h
//          2. RetailItem.cpp
//          3. Store.h
//          4. StoreDriver.cpp
//
//*******************************************************************************************************

#include "Store.h"

//*******************************************************************************************************

Store::Store(int numItems, string storeName)
{
    this->numItems = numItems;
    this->storeName = storeName;
    items = new RetailItem[numItems];
}

//*******************************************************************************************************

Store::~Store()
{
    delete[] items;
}

void Store::displayAllItems() const
{
    cout << storeName << endl;
    cout << getStoreName() << endl;
    cout << getNumItems() << " in stock" << endl;
    cout << string(45, '*') << endl;
    cout << left << setw(20) << "Description" << setw(10) << "Price" << setw(10)
         << "Quantity" << endl;
    for (int i = 0; i < getNumItems(); i++)
    {
        cout << setw(20) << items[i].getDescription() << setw(10) << items[i].getPrice()
             << setw(10) << items[i].getQuantity() << endl;
    }
}

//*******************************************************************************************************

int Store::getNumItems() const
{
    return numItems;
}

//*******************************************************************************************************

string Store::getStoreName() const
{
    return storeName;
}

//*******************************************************************************************************

void Store::setAllItems()
{
    string description;
    int quantity;
    double price;

    for (int i = 0; i < numItems; i++)
    {
        cout << "Enter the description for item " << i + 1 << ": ";
        getline(cin, description);
        items[i].setDescription(description);
        cout << "Enter the price for item " << i + 1 << ": ";
        cin >> price;
        items[i].setPrice(price);
        cout << "Enter the quantity for item " << i + 1 << ": ";
        cin >> quantity;
        items[i].setQuantity(quantity);
        cin.ignore();
    }
}

//*******************************************************************************************************