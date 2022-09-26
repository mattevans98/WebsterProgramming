#include <cstring>
using namespace std;


// Worksheet problem #9
int main()
{
	char str0[81] = "dog";
	char str1[81] = "fish";
	char str2[81] = "cat";

	char *small = str0;

	if (strcmp(small, str1) > 0)
		small = str1;
	if (strcmp(small, str2) > 0)
		small = str2;

	return 0;
}

