#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    constexpr size_t array_size = 10;
    int ia[array_size];
    for(size_t ix = 0;ix < array_size;++ix)
        ia[ix] = int(ix);
    for(auto &i : ia)
        cout << "the" << ia[i] << "is" << " " << i << endl;
    return 0;
}
