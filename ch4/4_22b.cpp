#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int grade;
    while(cin >> grade)
    {
        if(grade >= 90)
            cout << "high pass";
        else if(grade >=75)
            cout << "pass";
        else if(grade >= 60)
            cout << "low pass";
        else
            cout << "fail";
    }
    return 0;
}
