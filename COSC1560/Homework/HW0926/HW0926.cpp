//*******************************************************************************************************
//
//		File:					HW0926.cpp
//
//		Student:				Matt Evans
//
//		Assignment:				Program #HW0926
//
//		Course Name:			Programming II
//
//		Course Number:			COSC 1560-01
//
//		Due:					9/28/22
//
//
//		This program answers problem #15 on the c-string worksheet
//
//		Other files required:
//			1.	none
//
//*******************************************************************************************************

#include <iostream>
using namespace std;

//*******************************************************************************************************

int fun(char *, char *);

//*******************************************************************************************************

int main()
{
	cout << fun("abcd", "bcd") << endl;        // Output: 2
													 // See tracing table below
	return 0;
}

//*******************************************************************************************************

int fun(char *s, char *t)
{
	char *p1,
			*p2;
	bool stop = false;
	for (p1 = s; !stop && *p1 != '\0'; p1++)        // Outer for loop iterates over each char in s
	{
		for (p2 = t; !stop && *p2 != '\0'; p2++)    // Inner for loop iterates over each char in t
		{
			if (*p1 == *p2)                         // Loop stops if the chars in *p1 and *2 are equal
				stop = true;
		}
		if (*p2 != '\0')                            // After iterating over p2, the outer loop stops if
			stop = true;                            // *p2 equals '\0' (meaning the end of the
													// c-string was reached with no matches)
	}
	return p1 - s;                                  // p1 points to s+1 after loop execution so
													// (s+1) - s is returned. This evaluates to 2
													// because the size of a char is 2 bytes. If the
}                                                   // address of s was 1000, the equation would be:
													// (1000+2) - 1000 = 2

//*******************************************************************************************************

/*

Tracing Table
|  s    |  t    |  p1    |  *p1   |  p2   |  *p2   |  stop  |
|"abcd" |"bcd"  |  s     | 'a'    |  t    |  'b'   |  false |
|"abcd" |"bcd"  |  s     | 'a'    |  t+1  |  'c'   |  false |
|"abcd" |"bcd"  |  s     | 'a'    |  t+2  |  'd'   |  false |
|"abcd" |"bcd"  |  s+1   | 'b'    |  t    |  'b'   |  true  |

 */