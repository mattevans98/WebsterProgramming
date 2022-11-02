#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    fstream file;
    file.open("record.dat", ios::out | ios::binary);

    const int SIZE = 81,
            SIZE2 = 5;
    int a = 100;
    char letter = 'A';

    file.write(reinterpret_cast<char *>(&a), sizeof(a));
    file.write(&letter, sizeof(letter)); // reinterpret_cast not needed bc it's already a char

    char msg[SIZE] = "Goodbye Cruel World!";
    file.write(msg, sizeof(msg)); // reinterpret_cast not needed bc it's already a *char

    double vals[SIZE2] = {1.1, 2.2, 3.3, 4.4, 5.5};
    file.write(reinterpret_cast<char *>(vals), sizeof(vals));
    file.close();

    file.open("record.dat", ios::in | ios::binary);
    int a1;
    char letter1;
    char msg1[SIZE];
    double vals1[SIZE2];

    if (!file.fail())
    {
        file.read(reinterpret_cast<char *>(&a1), sizeof(a1));
        cout << a1 << " ";

        file.read(&letter1, sizeof(letter1));
        cout << letter1 << " ";

        file.read(msg1, sizeof(msg1));
        cout << msg1 << endl;

        file.read(reinterpret_cast<char *>(&vals1), sizeof(vals1));
        for (double val1: vals1)
            cout << val1 << endl;
    }
    else
    {
        cout << "Error opening file" << endl;
    }

    return 0;
}