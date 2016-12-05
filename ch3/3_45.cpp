#include <iostream>
#include <string>
#include <vector>

using namespace std;
using int_array = int[4];

int main()
{
    const size_t rowcnt = 3,cowcnt = 4;
    int ia[rowcnt][cowcnt] = {{1,1,2,2},
                    {3,4,3,4},{6,6,6,6}};
    for(const auto &row: ia)
        for(auto cow : row)
            cout << cow << ' ';
    cout << endl;

    for(auto row = 0;row < rowcnt;row++)
        for(auto cow = 0;cow < cowcnt;cow++)
            cout << ia[row][cow] << ' ';
    cout << endl;

    for(auto p = ia;p != ia + rowcnt;p++)
        for(auto q = *p;q != *p + cowcnt;q++)
            cout << *q << ' ';
    cout << endl;
    return 0;
}
