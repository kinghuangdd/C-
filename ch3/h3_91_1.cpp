#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int i;
    vector<int> ivec;
    while(cin >> i)
    {
        ivec.push_back(i);
    }
    for(auto c : ivec)
        cout << c << " ";
    cout << endl;
    return 0;

}
