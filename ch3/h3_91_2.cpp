#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string s1;
    vector<string> ivec;
    while(cin >> s1)
    {
        ivec.push_back(s1);
    }
    for(auto &c : ivec)
        cout << c << " ";
    cout << endl;
    return 0;

}
