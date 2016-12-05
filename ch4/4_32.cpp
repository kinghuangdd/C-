#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    constexpr int size = 5;
    int ia[size] = {1, 2, 3, 4, 5};
    int *ptr = ia,ix = 0;
    for(; ix != size && ptr != ia+size;
            ++ix,++ptr)
    {
        cout << ix << *ptr << endl;
    }
    cout << ix << *ptr << endl;
    return 0;
}
