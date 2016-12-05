#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1;
    while(cin >> s1)
    {

        decltype(s1.size()) i = 0;
        while(i < s1.size())
        {
            s1[i] = 'X';
            i++;
        }
        cout << s1 << " ";
    }
    return 0;
}
