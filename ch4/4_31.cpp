#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec(10);
    vector<int>::size_type cnt = ivec.size();
    for(vector<int>::size_type ix = 0;ix != ivec.size();++ix , cnt--)
        ivec[ix] = cnt;
    for(const auto &i : ivec)
        cout << i << endl;
    return 0;

}
