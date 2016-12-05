#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    const vector<string> scores{"F" ,"E" ,"D" ,"C" ,"B" ,"A"};
    int grade;
    string lettergrade;
    while(cin >> grade)
    {
        if(grade <= 60)
            lettergrade = scores[0];
        else
            lettergrade = scores[(grade-50)/10];
        cout << lettergrade <<endl;
    }
    return 0;
}
