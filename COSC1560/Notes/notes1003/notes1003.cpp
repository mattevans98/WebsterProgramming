#include <iostream>
using namespace std;

void capitalize(char *);
int sum(char *);

int main()
{
	const int SIZE = 81;
	char *str = new char[81];
	strcpy(str, "hello. my name is joe. what is your name.");

	capitalize(str);
	cout << str << endl;

	strcpy(str, "251x3w");
	cout << sum(str) << endl;

	delete[] str;
	return 0;
}

void capitalize(char *str)
{
	//char * s = strstr(str, ". ");
	//str = s;

	*str = toupper(*str);
	str++;

	while (*str != '\0')
	{
		if (*str == '.' && *(str + 1) == ' ')
		{
			*(str + 2) = toupper(*(str + 2));
			str += 2;
		}
		else
		{
			str++;
		}
	}
}

int sum(char *str)
{
	int total = 0;
	while (*str != '\0')
	{
		if (isdigit(*str))
		{
			total += (*str - '0');
		}

		str++;
	}

	return total;
}