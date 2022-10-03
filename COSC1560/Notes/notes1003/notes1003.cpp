#include <iostream>
using namespace std;

void capitalize(char *);

int main()
{
	const int SIZE = 81;
	char *str;
	strcpy(str, "hello. my name is joe. what is your name.");

	capitalize(str);

	return 0;
}

void capitalize(char *str)
{
	*str = toupper(*str);
	str++;

	while (*str != '\0')
	{
		if (*str == '.' && *(str + 1) == ' ')
		{
			*(str + 2) = toupper(*(str + 2));
		}
	}
}