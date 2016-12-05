#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int nu;
    vector<int> ivec;
    for(nu = 0;nu <= 100;nu++)
        ivec.push_back(nu);
    for(auto &i : ivec)
        cout << i << " ";
    cout << endl;
    for(auto &i : ivec)
    {
        i = (i%2 ? 2*i : i);
        cout << i << " ";
    }
    return 0;
}
