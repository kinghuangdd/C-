#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec;
    int i;
    while(cin >> i)
        ivec.push_back(i);
    for(auto it = ivec.begin();
            it != ivec.end();++it)
       (*it) *= 2;
    for(const auto &ival : ivec)
        cout << ival << " ";
    cout << endl;
    return 0;
}

