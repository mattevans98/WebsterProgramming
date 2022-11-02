#include <fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("record.dat", ios::in | ios::out | ios::binary);

    const int SIZE = 81,
            SIZE2 = 5;
    int a = 100;
    char letter = 'A';
    char msg[SIZE] = "Goodbye Cruel World!";
    double vals[SIZE2] = {1.1, 2.2, 3.3, 4.4, 5.5};

    return 0;
}