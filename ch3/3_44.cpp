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
    for(const int_array &row: ia)
        for(int cow : row)
            cout << cow << ' ';
    cout << endl;

    for(size_t row = 0;row < rowcnt;row++)
        for(size_t cow = 0;cow < cowcnt;cow++)
            cout << ia[row][cow] << ' ';
    cout << endl;

    for(int_array *p = ia;p != ia + rowcnt;p++)
        for(int *q = *p;q != *p + cowcnt;q++)
            cout << *q << ' ';
    cout << endl;
    return 0;
}
