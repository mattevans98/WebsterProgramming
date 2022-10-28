#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

//*******************************************************************************************************

void display3(ifstream &);

//*******************************************************************************************************

int main()
{
//    ofstream fout;
//    fout.open("record.txt");
//    fout << "Goodbye cruel world!" << endl;
//    fout << fixed << setprecision(2) << 3.14156926535 << endl;
//    int nums[5] = {0};
//    for (int num: nums)
//        fout << num << ' ';
//    fout << endl;
//    fout.close();

    ifstream fin;
    fin.open("record.txt");
    int sum = 0;
    int num;

    if (fin.fail())
    {
        cout << "Error opening file" << endl;
    }
    else
    {
//        fin >> num;
//        cout << "What did I just read? " << num << endl;
//        while (fin >> num)
//        {
//            sum += num;
//        }
//        cout << sum << endl;
//        while (fin.getline(line, 80)){}

        fin >> num;
        while (!fin.fail()) // while (!fin.eof())
        {
            sum += num;
            fin >> num;
        }
        cout << sum << endl;

        display3(fin);

        fin.close();
    }

    return 0;
}

//*******************************************************************************************************

void display3(ifstream &fin)
{
    fin.clear();
    fin.seekg(0L, ios::beg);

    for (int i = 0; i < 3; i++)
    {
        int num;
        fin >> num;
        cout << num << ' ';
    }
}
