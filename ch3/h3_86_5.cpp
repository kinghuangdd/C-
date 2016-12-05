#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1;
    while(cin >> s1)
    {
        for(auto c : s1)
        {
            if(!ispunct(c))
                cout << c;
        }
        cout << " " ;
    }
    cout << endl;
    return 0;
}
