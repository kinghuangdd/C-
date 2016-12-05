#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    constexpr size_t array_size = 10;
    int ia[array_size];
    for(auto &i : ia[])
        cout << i << " ";
    for(size_t ix = 1;ix < array_size;++ix)
        ia[ix] = ix;
    for(auto &i : ia[])
        cout << i << " ";
    return 0;
}
