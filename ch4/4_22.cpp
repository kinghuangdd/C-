#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int grade;
    while(cin >> grade)
    {
        cout << ((grade >= 90) ? "high pass" : ((grade >=75) ?
                    "pass" :((grade >= 60) ? "low pass" : "fail"))) << endl;
    }
    return 0;
}
