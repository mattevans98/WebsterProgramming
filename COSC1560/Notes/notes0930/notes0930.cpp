#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void replace(string &);

int main()
{
	// c-string to numeric
	int a = atoi("123");
	double n = atof("3.14");
	long num = atol("100000000000");

	// string to numeric
	string str = "1234";
	int s = atoi(str.c_str());
	int s2 = stoi(str);
	double s3 = stod(str);
	long s4 = stol(str);

	// convert from numeric to string
	string str2 = to_string(123);
	double gpa;
	cin >> gpa;
	str = to_string(gpa);

	string str3 = "the dog jumped over the fence";
	string str4 = "the";
	string str5 = "that";

	return 0;
}

void replace(string &str, const string &str1, const string &str2)
{
	int pos = static_cast<int>(str.find(str1));

	while (pos >= 0)
	{
		str.replace(pos, str1.length(), str2);
		pos = static_cast<int>(str.find(str1, pos));
	}
}