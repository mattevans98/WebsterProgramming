#include <iostream>
using namespace std;

//*******************************************************************************************************

struct GradeInfo
{
    string name;
    int *testScores;
    double avg;
};

//*******************************************************************************************************

int main()
{
    GradeInfo a;
    GradeInfo *s = new GradeInfo;
    // pointer -> member
    s->name = "John";
    // object.member
    *a.testScores = 85;
    *(*s).testScores = 90;

    return 0;
}