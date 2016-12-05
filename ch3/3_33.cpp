#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    unsigned scores[11];
    unsigned grade;
    while(cin >> grade)
    {
        if(grade < 100)
            ++scores[grade/100];//等价于scores[grade/100]=scores[grade/100]+1,vertor也有下标运算
    }
    for(auto &i : scores)
        cout << i << endl;
}
