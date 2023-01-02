//*******************************************************************************************************
//
//		File:					StoreDriver.cpp
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
//		This program holds retail items' data in a retail store and displays it
//
//		Other files required:
//			1. RetailItem.h
//          2. RetailItem.cpp
//          3. Store.h
//          4. StoreDriver.cpp
//
//*******************************************************************************************************

#include "Store.h"

int main()
{
    Store store;
    store.setAllItems();
    store.displayAllItems();
    return 0;
}

//*******************************************************************************************************

// Output:
/*
Enter the description for item 1: paper
Enter the price for item 1: 4.99
Enter the quantity for item 1: 120
Enter the description for item 2: notebook
Enter the price for item 2: 1.99
Enter the quantity for item 2: 200
Enter the description for item 3: pencil
Enter the price for item 3: 0.99
Enter the quantity for item 3: 120
Enter the description for item 4: staples
Enter the price for item 4: 4.99
Enter the quantity for item 4: 30
Enter the description for item 5: blue ink pen
Enter the price for item 5: 2.59
Enter the quantity for item 5: 100

Webster Grocery
5 in stock
*********************************************
Description         Price     Quantity
paper               4.99      120
notebook            1.99      200
pencil              0.99      120
staples             4.99      30
blue ink pen        2.59      100

Process finished with exit code 0
*/