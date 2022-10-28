#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("record.txt");
    fout << "Goodbye cruel world!" << endl;
    fout << fixed << setprecision(2) << 3.14156926535 << endl;
    int nums[5] = {0};
    for (int num: nums)
        fout << num << ' ';
    fout << endl;
    fout.close();

    return 0;
}

