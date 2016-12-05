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
        cout << (grade <= 60 ? lettergrade = scores[0] :
            lettergrade = scores[(grade-50)/10]) << endl;//条件运算符的优先级非常低
    return 0;
}
