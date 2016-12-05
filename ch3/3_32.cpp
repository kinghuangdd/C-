#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec(10);
    for(auto i = 0;i < ivec.size();i++)
        ivec[i] = int(i);
    for(const auto &i : ivec)
        cout << "the" <<ivec[i] << "is" << " " << i << endl;
    return 0;
}
