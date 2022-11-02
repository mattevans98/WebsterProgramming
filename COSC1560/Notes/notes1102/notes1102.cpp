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

    file.write(reinterpret_cast<char *>(&a), sizeof(a));
    file.write(&letter, sizeof(letter));

    char msg[SIZE] = "Goodbye Cruel World!";
    file.write(msg, sizeof(msg));

    double vals[SIZE2] = {1.1, 2.2, 3.3, 4.4, 5.5};
    file.write(reinterpret_cast<char *>(vals), sizeof(vals));
    file.close();

    return 0;
}