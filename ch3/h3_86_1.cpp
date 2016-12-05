#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1;
    while(cin >> s1)
    {
        for(auto &c:s1)
            c = 'X';
        cout << s1 << " " ;
    }
    cout << endl;
    return 0;
}
