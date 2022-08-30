#include <iostream>

using namespace std;

void binarySearch(const int data[], int, int);

int main()
{
	const int SIZE = 5;
	int target = 82;
	int data[SIZE] = {75, 82, 87, 98, 100};

	binarySearch(data, SIZE, target);

	return 0;
}

void binarySearch(const int data[], int size, int target)
{
	int index = -1,
			mid,
			first = 0,
			last = size - 1,
			i = 0;

	while (index == -1 && first <= last) {
		mid = (first + last) / 2;
		if (data[mid] == target)
			index = mid;
		else if (data[mid] > target)
			last = mid - 1;
		else
			first = mid + 1;

		cout << "i = " << i << endl << "index = " << index << endl << "first = " << first << endl
			 << "last = " << last << endl << "mid = " << mid << endl << "data[mid] = " << data[mid]
			 << endl;

		cout << "**********" << endl;

		i++;
	}
}