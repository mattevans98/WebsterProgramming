#include <iostream>
#include <string>
using namespace std;

void dollarFormat(string &);

int main()
{
	string str = "Four scores and seven years ago";

	// Accessing characters in string
	cout << str << endl;
	cout << str[4] << endl;
	cout << str.at(4) << endl;
	cout << *(str.begin()) << endl; // 'F'
	cout << str.front() << endl; // 'F'
	cout << str[0] << endl; // 'F'

	// Gets length of string
	int length = static_cast<int>(str.length()); // Preferred
	length = static_cast<int>(str.size());
	int capacity = static_cast<int>(str.capacity());

	// Remove char(s) from string
	str.clear(); // Clears the whole string
	str.erase(5, 6); // .erase(position, numToRemove) - "Four  and seven years ago"

	// Insert char into string - size changes
	str.insert(5, "$"); // "Four $scores and seven years ago
	str.insert(5, 10, '*'); // Four **********scores and seven years ago

	// Replace char in string - size does not change
	str.replace(3, 5, "Hello"); // FouHellores and seven years ago

	string str2 = "Hello";

	if (str.compare(str2) == 0)
		cout << "same";
	else if (str.compare(str2) > 0)
		cout << "str2 first";
	else
		cout << "str1 first";

	// Find char in string
	int position = str.find('s');

	if (position != string::npos)
		cout << position;
	position = str.find("scores", 7); // Second param is start position


	return 0;
}

void dollarFormat(string &dollar)
{
	int dotPos = static_cast<int>(dollar.find('.'));

	while (dotPos > 3)
	{
		dotPos -= 3;
		dollar.insert(dotPos, ",");
	}

	dollar.insert(0, "$");
}