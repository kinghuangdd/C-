#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};
    vector<int> ivec(begin(arr),end(arr));
    vector<int> ivec1(arr+1,arr+3);
    for(const auto &i : ivec)
        cout << i << " ";
    cout << endl;
    for(const auto &i :ivec1)
        cout << i << " ";
    cout << endl;
    return 0;
}
