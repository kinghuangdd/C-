 #include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    const int sz = 10;
    vector<int> ivec;
    vector<int>::iterator it;
    int i;
    int arr[sz];
    while(cin >> i)
        ivec.push_back(i);
    for(auto i = 0;i != ivec.size();++i)
        arr[i] = ivec[i];
    for(const auto &i : arr)
        cout << i << endl;
    return 0;
}
