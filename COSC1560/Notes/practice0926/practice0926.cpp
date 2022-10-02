#include <cstring>
#include <iostream>
#include <string>
using namespace std;

//*******************************************************************************************************

void problem9();
void problem10();
void problem12();
void problem13();
void problem14();
void problem15();
int fun(char *, char *);
void copy(char[], char[]);

//*******************************************************************************************************

// Worksheet problem #9
int main()
{
	problem9();
	problem10();
	problem12();
	problem13();
	problem14();
	problem15();

	cout << string(40, '*');
	string name = "John Doe";
	cout << name << endl;
	name.append(", hello");
	name += ", hello";

	return 0;
}

//*******************************************************************************************************

void problem9()
{
	char str0[81] = "dog";
	char str1[81] = "fish";
	char str2[81] = "cat";

	char *small = str0;

	if (strcmp(small, str1) > 0)
		small = str1;
	if (strcmp(small, str2) > 0)
		small = str2;
}

//*******************************************************************************************************

// Worksheet problem 10
void problem10()
{
	char s[] = "Hsjodi", *p;

	for (p = s; *p != '\0'; p++)
		--(*p);
	cout << s << endl; // Grinch
}

//*******************************************************************************************************

void problem12()
{
	char str[] = "hello";
	char *p = &str[2];
	cout << p << endl; // llo
}

//*******************************************************************************************************

void problem13()
{
	char str[] = "hello";
	char *p = &str[2];
	cout << p - str << endl; // 2
}

//*******************************************************************************************************

void problem14()
{
	char *url;
	strcpy(url, "www.webster.edu/index.html");

	char *p = strstr(url, reinterpret_cast<const char *>('/'));

	if (p != nullptr)
		*p = '\0';
}

//*******************************************************************************************************

void problem15()
{
	cout << fun("abcd", "babc") << endl;
	cout << fun("abcd", "bcd") << endl;
}

//*******************************************************************************************************

int fun(char *s, char *t)
{
	char *p1,
			*p2;
	bool stop = false;
	for (p1 = s; !stop && *p1 != '\0'; p1++)
	{
		for (p2 = t; !stop && *p2 != '\0'; p2++)
		{
			if (*p1 == *p2)
				stop = true;
		}
		if (*p2 != '\0')
			stop = true;
	}
	return p1 - s;
}

//*******************************************************************************************************

void copy(char dest[], char src[])
{
	int i;

	for (i = 0; src[i] != '\0'; ++i)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
}

//*******************************************************************************************************

